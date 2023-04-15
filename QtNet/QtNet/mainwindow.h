#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTcpServer>
#include <QHostAddress>
#include <QNetworkInterface>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void GetLocalIPAddress();
    QByteArray HexStringToByteArray(QString HexString);

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpClient;
    QTcpServer *tcpServer;
    QList<QTcpSocket*> lstClient;
    QTcpSocket *currentClient;

    QString DataPath;
    void SaveDatas(const QDateTime &dt, const QString &tstr);

private slots:
    void ReadData();
    void ReadError(QAbstractSocket::SocketError);

    void NewConnectionSlot();
    void disconnectedSlot();
    void ServerReadData();

    void on_BtnConn_clicked();
    void on_BtnClearRecv_clicked();
    void on_BtnSend_clicked();
    void on_radioClient_clicked();
    void on_radioServer_clicked();
    void on_calendarWidget_selectionChanged();
};

#endif // MAINWINDOW_H
