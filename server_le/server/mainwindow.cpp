#include "ui_mainwindow.h"
#include "mainwindow.h"
#include<QDebug>
#include<QtCharts/QValueAxis>
#include<QTime>

void MainWindow::createChart()
{
    //配置基础的图表数据
    mainChart = new QChart();
    dotSeries = new QScatterSeries;
    alertLineSeries = new QLineSeries;
    connectLineSeries = new QLineSeries;

    //X、Y坐标系
    QValueAxis *axisX = new QValueAxis;
    QValueAxis *axisY = new QValueAxis;

    //数值范围
    axisX->setRange(0,60);
    //数据形式
    axisX->setLabelFormat("%.2f");
    //是否显示表格分割虚线
    axisX->setGridLineVisible(true);
    //分割的格子数
    axisX->setTickCount(7);
    //最小分割
    axisX->setMinorTickCount(1);
    //坐标代表的含义标题
    axisX->setTitleText("时间");

    //数值范围
    axisY->setRange(34,43);
    //数据形式
    axisY->setLabelFormat("%.2f");

    axisY->setTickCount(10);
    //坐标代表的含义标题
    axisY->setTitleText("体温");

    mainChart->addAxis(axisX,Qt::AlignBottom);
    mainChart->addAxis(axisY,Qt::AlignLeft);

     mainChart->addSeries(connectLineSeries);
     mainChart->addSeries(alertLineSeries);
     mainChart->addSeries(dotSeries);   //注意这几条线的层次顺序，否则会覆盖住

    //隐藏图例
    mainChart->legend()->hide();

    //需要经坐标系和数值范围绑定在一起，否侧显示的数据不正确
    //必须是将图类型添加到图表上之后
    dotSeries->setMarkerSize(15);
    dotSeries->attachAxis(axisX);
    dotSeries->attachAxis(axisY);

    //警戒线
   // alertLineSeries->setColor(Qt::red); //红色警戒线
    alertLineSeries->setPen(QPen(Qt::red,5,Qt::DashDotLine));//设置红色同时设置线的粗细、样式
    alertLineSeries->attachAxis(axisX);
    alertLineSeries->attachAxis(axisY);

    //连接线
     connectLineSeries->setColor(Qt::blue);
     connectLineSeries->attachAxis(axisX);
     connectLineSeries->attachAxis(axisY);

     alertLineSeries->append(0,37.3);
     alertLineSeries->append(60,37.3);


}

MainWindow::MainWindow(QWidget *parent)
    :QWidget(parent),chartView(new QChartView(this)),currentTempLabel(new QLabel(this)),currentLcdnumber(new QLCDNumber(this))
{
    //对于绝大部分的界面元素，创建对象时，可以添加父元素的指针，代表加到父界面
   // chartView = new QChartView(this);
   // this->setGeometry(500,500,800,600);
     this->setMinimumSize(800,600);
     createChart();

     chartView->setGeometry(200,0,600,400);
     chartView->setChart(mainChart);

     currentTempLabel->setGeometry(0,0,180,30);
     currentTempLabel->setText("");
     QFont f;
     f.setBold(true);
     f.setPointSize(10);
     currentTempLabel->setFont(f);
     currentTempLabel->setStyleSheet("color:red");

     //LCD显示数值
     currentLcdnumber->setGeometry(0,50,180,50);
   //  currentLcdnumber->display("2020");

     /*
        1、设置播放器
        2、配置多媒体资源
           (1)是否能做为一个内部资源,不要放太大的资源，否则会导致编译时间过长
           (2)是否能随着安装包发送
        3、播放处理
      */

     //alertplayer = new QMediaPlayer;
    //   alertplayer -> setMedia(QUrl::fromLocalFile("/Users/KuGou/8069.mp3"));
     //1、作为一个内部资源去播放
  //  alertplayer->setMedia(QUrl("qrc:/8069.mp3"));
    // alertplayer->setVolume(50);
    // alertplayer->play();

    //qDebug() << qApp->applicationDirPath()<<endl;
     //2、本地路径找寻播放那个文件，与Debug文件同级
      //alertplayer->setMedia(QUrl::fromLocalFile(qApp->applicationDirPath() + "/" +"8069.mp3"));

    if(startSever())
    {
        qDebug()<<"等待连接";
        connect(server,SIGNAL(newConnection()),this,SLOT(newConnectionAccept()));
    }

}

MainWindow::~MainWindow()
{
}
bool MainWindow::startSever()
{
    server = new QTcpServer();
    return server->listen(QHostAddress("127.0.0.1"),8888); //监听IP和端口
}

void MainWindow::newConnectionAccept()
{
    qDebug() <<"新连接已接入";
        //获取当前传输套接字 可以进行数据的发送和接收
        dataSocket = server->nextPendingConnection();
        dataSocket->write("hello");

        //客户端是否有新的数据发送
        //有->触发readyRead信号
        //可以对发送的数据进行处理
        qreal passMinute = QTime::currentTime().minute();
        connect(dataSocket,&QTcpSocket::readyRead,[=]()mutable{
           //按照高8位和低8位数据转换成真正的温度数据
           short temp = 0;
           dataSocket->read((char *)&temp,2);
           short t = temp >> 8;
           float realTemp = t +(temp & 0x00ff) / 100.00;
           qDebug() << realTemp;

           //如果显示的点太多会混乱，所以每隔一分钟清除之前的那个点
           if(passMinute != QTime::currentTime().minute())
           {
               dotSeries->clear();
               connectLineSeries->clear();
               passMinute = QTime::currentTime().minute();
           }

            connectLineSeries->append(QTime::currentTime().second(),realTemp);
            dotSeries->append(QTime::currentTime().second(),realTemp);

           QString tt("当前温度：");
           tt += QString("%1").arg(realTemp);//转换数值
           currentTempLabel->setText(tt);
           //LCD显示温度值
           currentLcdnumber->display(realTemp);

           if(realTemp >37.3)
           {
               if(alertplayer->state()==QMediaPlayer::PlayingState)
               {
                   alertplayer->stop();
               }
               alertplayer->play();
           }
        });

}

