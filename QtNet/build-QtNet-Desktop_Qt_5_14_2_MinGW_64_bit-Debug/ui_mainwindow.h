/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioServer;
    QRadioButton *radioClient;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelAddr;
    QLineEdit *EditIP;
    QLabel *label_2;
    QLineEdit *EditPort;
    QSpacerItem *horizontalSpacer;
    QPushButton *BtnConn;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *EditRecv;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkHexDisp;
    QPushButton *BtnClearRecv;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *EditSend;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkHexSend;
    QPushButton *BtnSend;
    QSpacerItem *verticalSpacer_2;
    QComboBox *cbLstClients;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_2;
    QLCDNumber *lcdNumberSPO2_2;
    QLCDNumber *lcdTemp_2;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_13;
    QLabel *label_15;
    QLCDNumber *lcdNumberHR_2;
    QLabel *label_11;
    QLabel *label_14;
    QWidget *widget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_10;
    QCalendarWidget *calendarWidget;
    QTableWidget *logDATA;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(934, 659);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(16777215, 350));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMinimumSize(QSize(0, 60));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioServer = new QRadioButton(groupBox_4);
        radioServer->setObjectName(QString::fromUtf8("radioServer"));

        horizontalLayout_4->addWidget(radioServer);

        radioClient = new QRadioButton(groupBox_4);
        radioClient->setObjectName(QString::fromUtf8("radioClient"));

        horizontalLayout_4->addWidget(radioClient);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(groupBox_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelAddr = new QLabel(groupBox_2);
        labelAddr->setObjectName(QString::fromUtf8("labelAddr"));

        horizontalLayout_5->addWidget(labelAddr);

        EditIP = new QLineEdit(groupBox_2);
        EditIP->setObjectName(QString::fromUtf8("EditIP"));
        EditIP->setMinimumSize(QSize(300, 20));

        horizontalLayout_5->addWidget(EditIP);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        EditPort = new QLineEdit(groupBox_2);
        EditPort->setObjectName(QString::fromUtf8("EditPort"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(EditPort->sizePolicy().hasHeightForWidth());
        EditPort->setSizePolicy(sizePolicy1);
        EditPort->setMinimumSize(QSize(140, 20));
        EditPort->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(EditPort);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        BtnConn = new QPushButton(groupBox_2);
        BtnConn->setObjectName(QString::fromUtf8("BtnConn"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(BtnConn->sizePolicy().hasHeightForWidth());
        BtnConn->setSizePolicy(sizePolicy2);
        BtnConn->setMinimumSize(QSize(120, 0));
        BtnConn->setMaximumSize(QSize(10000, 16777215));

        horizontalLayout->addWidget(BtnConn);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        EditRecv = new QTextEdit(groupBox);
        EditRecv->setObjectName(QString::fromUtf8("EditRecv"));
        EditRecv->setReadOnly(true);
        EditRecv->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(EditRecv);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        chkHexDisp = new QCheckBox(groupBox);
        chkHexDisp->setObjectName(QString::fromUtf8("chkHexDisp"));

        verticalLayout_2->addWidget(chkHexDisp);

        BtnClearRecv = new QPushButton(groupBox);
        BtnClearRecv->setObjectName(QString::fromUtf8("BtnClearRecv"));
        BtnClearRecv->setMinimumSize(QSize(120, 0));

        verticalLayout_2->addWidget(BtnClearRecv);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        EditSend = new QTextEdit(groupBox_3);
        EditSend->setObjectName(QString::fromUtf8("EditSend"));

        horizontalLayout_3->addWidget(EditSend);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        chkHexSend = new QCheckBox(groupBox_3);
        chkHexSend->setObjectName(QString::fromUtf8("chkHexSend"));

        verticalLayout_3->addWidget(chkHexSend);

        BtnSend = new QPushButton(groupBox_3);
        BtnSend->setObjectName(QString::fromUtf8("BtnSend"));
        BtnSend->setMinimumSize(QSize(120, 0));

        verticalLayout_3->addWidget(BtnSend);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        cbLstClients = new QComboBox(groupBox_3);
        cbLstClients->setObjectName(QString::fromUtf8("cbLstClients"));
        cbLstClients->setMinimumSize(QSize(120, 0));

        verticalLayout_3->addWidget(cbLstClients);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addWidget(groupBox_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_9 = new QVBoxLayout(tab_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lcdNumberSPO2_2 = new QLCDNumber(tab_2);
        lcdNumberSPO2_2->setObjectName(QString::fromUtf8("lcdNumberSPO2_2"));
        lcdNumberSPO2_2->setDigitCount(4);

        gridLayout_2->addWidget(lcdNumberSPO2_2, 2, 1, 1, 1);

        lcdTemp_2 = new QLCDNumber(tab_2);
        lcdTemp_2->setObjectName(QString::fromUtf8("lcdTemp_2"));
        lcdTemp_2->setDigitCount(4);

        gridLayout_2->addWidget(lcdTemp_2, 0, 1, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font1;
        font1.setPointSize(20);
        label_12->setFont(font1);
        label_12->setLayoutDirection(Qt::RightToLeft);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font1);
        label_16->setLayoutDirection(Qt::RightToLeft);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 0, 0, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setLayoutDirection(Qt::RightToLeft);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 1, 0, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font1);

        gridLayout_2->addWidget(label_15, 0, 2, 1, 1);

        lcdNumberHR_2 = new QLCDNumber(tab_2);
        lcdNumberHR_2->setObjectName(QString::fromUtf8("lcdNumberHR_2"));
        lcdNumberHR_2->setDigitCount(4);

        gridLayout_2->addWidget(lcdNumberHR_2, 1, 1, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        gridLayout_2->addWidget(label_11, 2, 2, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);

        gridLayout_2->addWidget(label_14, 1, 2, 1, 1);


        verticalLayout_9->addLayout(gridLayout_2);

        widget = new QWidget(tab_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);

        verticalLayout_9->addWidget(widget);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_10 = new QVBoxLayout(tab_3);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        calendarWidget = new QCalendarWidget(tab_3);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(calendarWidget->sizePolicy().hasHeightForWidth());
        calendarWidget->setSizePolicy(sizePolicy4);

        verticalLayout_10->addWidget(calendarWidget);

        logDATA = new QTableWidget(tab_3);
        logDATA->setObjectName(QString::fromUtf8("logDATA"));

        verticalLayout_10->addWidget(logDATA);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_5->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\345\277\203\347\216\207\350\241\200\346\260\247\344\273\252", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        radioServer->setText(QCoreApplication::translate("MainWindow", "TCP\346\234\215\345\212\241\345\231\250", nullptr));
        radioClient->setText(QCoreApplication::translate("MainWindow", "TCP\345\256\242\346\210\267\347\253\257", nullptr));
        labelAddr->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        EditIP->setText(QCoreApplication::translate("MainWindow", "192.168.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        EditPort->setText(QCoreApplication::translate("MainWindow", "4321", nullptr));
        BtnConn->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\346\234\215\345\212\241\345\231\250", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256", nullptr));
        chkHexDisp->setText(QCoreApplication::translate("MainWindow", "HEX\346\230\276\347\244\272", nullptr));
        BtnClearRecv->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        chkHexSend->setText(QCoreApplication::translate("MainWindow", "HEX\345\217\221\351\200\201", nullptr));
        BtnSend->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\350\256\276\347\275\256", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\350\241\200\346\260\247", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\345\256\244\346\270\251", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\277\203\347\216\207", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\342\204\203", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "BPM", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\350\241\200\346\260\247\345\277\203\347\216\207", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
