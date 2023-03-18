#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //DB creat
    QSqlDatabase database; //建立了一个QSqlDatabase对象
    if (QSqlDatabase::contains("qt_sql_default_connection"))//检查指定的连接(connection)是否存在
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else //不存在，则创建
    {
        database = QSqlDatabase::addDatabase("QSQLITE");//QSQLITE是SQLite对应的驱动名
        database.setDatabaseName("MyDataBase.db");
        database.setUserName("DYR");
        database.setPassword("123456");
    }

    // DB Open
    if (!database.open())
    {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else
    {
        qDebug()<< "Successfully open";

        // creat a table
        QSqlQuery sql_query(database);//定义一个QSqlQuery对象。

//        QString create_sql = "create table Hrtoxy(id int primary key, time datetime, hrt int, oxy int);";
//        sql_query.prepare(create_sql);
//        if(!sql_query.exec())
//        {
//            qDebug() << "Error: Fail to create table." << sql_query.lastError();
//        }
//        else
//        {
//            qDebug() << "Table created!";
//        }

        int max_id = 0;
        //traverse the table
        sql_query.exec("select * from Hrtoxy");
        if(!sql_query.exec())
        {
            qDebug()<<sql_query.lastError();
        }
        else
        {
            while(sql_query.next())
            {
                max_id = sql_query.value(0).toInt();
                QString time = sql_query.value(1).toString();
                int hrt = sql_query.value(2).toInt();
                int oxy = sql_query.value(3).toInt();
                qDebug()<<max_id<<" "<<time<<" "<<hrt<<" "<<oxy;
            }
        }

        // insert data
        QString insert_sql = "insert into Hrtoxy values (?, ?, ?, ?)";
        sql_query.prepare(insert_sql);
        sql_query.addBindValue(max_id+1);
        sql_query.addBindValue(QDateTime::currentDateTime());
        sql_query.addBindValue(60);
        sql_query.addBindValue(98);
        if(!sql_query.exec())
        {
            qDebug() << sql_query.lastError();
        }
        else
        {
            qDebug() << "inserted suc!";
            qDebug()<<sql_query.value(0).toInt()<<" "<<sql_query.value(1).toString()\
                   <<" "<<sql_query.value(2).toInt()<<" "<<sql_query.value(3).toInt();;
        }


        //query finish
        sql_query.finish();
        //close DB
        database.close();
    }


    return a.exec();
}
