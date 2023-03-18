#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QChartView>
#include <QChart>
#include <QtCharts>
#include <QLabel>
#include <QChartView>
#include <QTcpServer>
#include <QTcpSocket>
#include <QLineSeries>
#include <QLCDNumber>
#include <QMediaPlayer>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include "dialog.h"


namespace Ui{
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void createChart();

    bool startSever();


    QChart * mainChart;
    QScatterSeries* dotSeries;
    QChartView *chartView;
    QLabel* currentTempLabel;
    QTcpServer* server;
    QTcpSocket* dataSocket;
    QLineSeries* alertLineSeries;
    QLineSeries* connectLineSeries;

    QLCDNumber* currentLcdnumber;
    QMediaPlayer* alertplayer;



public slots:
    void newConnectionAccept();


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
