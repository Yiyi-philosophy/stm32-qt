/*模拟温度发生器*/
/*通过随机数的方式产生温度*/
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
#include<iostream>
#include<bitset>
#include<QTcpSocket>
#include<QHostAddress>
#include<QDebug>
#include<QThread>
#include <thread>
using namespace std;
short gTemp;


//产生16位数据，占两个字节，而short也占两字节 ,高8位整数 低8位小数
void makeTemp()
{
    //配置随机种子,为了保证产生的数是相对随机的，避免随机数是固定的
    srand(clock());

    short temp = 0;
    char high = 0;
    char low = 0;
    //模拟人的体温34-43
    while(1)
    {
        usleep(100*1000); //100ms产生一个数据
        high = 34 + rand() % 9; //34加上一个0-9的随机数
        low = rand() % 100;

      //  cout << (int)high << endl;
      //  cout << (int)low << endl;

        //将产生的数送到temp中，做位运算处理
        temp = high;
        temp = temp << 8;

        //以16进制和二进制方式展示数据
       // cout << hex << temp << endl;
      //  cout << bitset<16>(temp) << endl;

        temp += low;
      //  cout << hex << temp << endl;
      //  cout << bitset<16>(temp) << endl;

        gTemp = temp; //对数据进行存储
    }
    //return temp;
}

/*TCP代表的是一个传输控制协议，本质是一个传输控制的模块，包括一个IP地址和端口*/
int main(int argc, char *argv[])
{
   //从哪里得到数据
   //开启多线程 ，避免卡住没办法产生数据
   std::thread t1(makeTemp);
   t1.detach();

    /*TCP连接服务器*/
   QTcpSocket *client =new QTcpSocket; //建立一个socket对象
   QHostAddress address("127.0.0.1");  //IP
   client->connectToHost(address,8888); //端口

   if(client->waitForConnected())  //监控真正拿到对应的地址和端口，在进行数据传输
   {
        //连接的对方的端口和地址
       qDebug() << client->peerAddress();
       qDebug() << client->peerPort();
        //连接的自己的端口和地址
       qDebug() << client->localAddress();
       qDebug() << client->localPort();

       //数据循环发送
       while(1)
       {
           //write的用法  两个参数：char *的地址 数据的长度
           //usleep(100*1000);

           sleep(rand()%10);//10s钟之内发送一个数据

         //cout << hex <<gTemp << endl;
          qDebug() << client->write((char *)&gTemp,2);
          client->flush();//缓冲区
       }
   }
    return 0;
}

