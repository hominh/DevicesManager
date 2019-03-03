/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QComboBox *comboBoxDeviceType;
    QTableView *tableView;
    QLabel *label_4;
    QComboBox *comboBoxHourFinish;
    QComboBox *comboBoxIp;
    QPushButton *pushButtonSetUp;
    QLabel *label_8;
    QLabel *label_3;
    QComboBox *comboBoxFloor;
    QComboBox *comboBoxMinuteFinish;
    QComboBox *comboBoxMinuteStart;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QPushButton *pushButtonCancel;
    QComboBox *comboBoxDevice;
    QComboBox *comboBoxHourStart;
    QLabel *label_5;
    QLabel *label_17;
    QComboBox *comboBoxDayInWeek;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label_9;
    QComboBox *comboBoxFloor_2;
    QLabel *label_10;
    QComboBox *comboBoxIp_2;
    QLabel *label_11;
    QComboBox *comboBoxHourStart_2;
    QLabel *label_12;
    QComboBox *comboBoxHourFinish_2;
    QPushButton *pushButtonFilter;
    QLabel *label_16;
    QComboBox *comboBoxDeviceType_2;
    QLabel *label_13;
    QComboBox *comboBoxDevice_2;
    QLabel *label_15;
    QComboBox *comboBoxMinuteStart_2;
    QLabel *label_14;
    QComboBox *comboBoxMinuteFinish_2;
    QPushButton *pushButtonCancel_2;
    QTableView *tableViewResult;
    QMenuBar *menuBar;
    QMenu *menu1;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1042, 520);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBoxDeviceType = new QComboBox(tab);
        comboBoxDeviceType->setObjectName(QStringLiteral("comboBoxDeviceType"));

        gridLayout->addWidget(comboBoxDeviceType, 1, 1, 1, 1);

        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 12);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        comboBoxHourFinish = new QComboBox(tab);
        comboBoxHourFinish->setObjectName(QStringLiteral("comboBoxHourFinish"));

        gridLayout->addWidget(comboBoxHourFinish, 0, 8, 1, 1);

        comboBoxIp = new QComboBox(tab);
        comboBoxIp->setObjectName(QStringLiteral("comboBoxIp"));

        gridLayout->addWidget(comboBoxIp, 0, 3, 1, 2);

        pushButtonSetUp = new QPushButton(tab);
        pushButtonSetUp->setObjectName(QStringLiteral("pushButtonSetUp"));

        gridLayout->addWidget(pushButtonSetUp, 0, 11, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 7, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        comboBoxFloor = new QComboBox(tab);
        comboBoxFloor->setObjectName(QStringLiteral("comboBoxFloor"));

        gridLayout->addWidget(comboBoxFloor, 0, 1, 1, 1);

        comboBoxMinuteFinish = new QComboBox(tab);
        comboBoxMinuteFinish->setObjectName(QStringLiteral("comboBoxMinuteFinish"));

        gridLayout->addWidget(comboBoxMinuteFinish, 1, 8, 1, 1);

        comboBoxMinuteStart = new QComboBox(tab);
        comboBoxMinuteStart->setObjectName(QStringLiteral("comboBoxMinuteStart"));

        gridLayout->addWidget(comboBoxMinuteStart, 1, 6, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 7, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 5, 1, 1);

        pushButtonCancel = new QPushButton(tab);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        gridLayout->addWidget(pushButtonCancel, 1, 11, 1, 1);

        comboBoxDevice = new QComboBox(tab);
        comboBoxDevice->setObjectName(QStringLiteral("comboBoxDevice"));

        gridLayout->addWidget(comboBoxDevice, 1, 3, 1, 2);

        comboBoxHourStart = new QComboBox(tab);
        comboBoxHourStart->setObjectName(QStringLiteral("comboBoxHourStart"));

        gridLayout->addWidget(comboBoxHourStart, 0, 6, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout->addWidget(label_17, 0, 9, 1, 1);

        comboBoxDayInWeek = new QComboBox(tab);
        comboBoxDayInWeek->setObjectName(QStringLiteral("comboBoxDayInWeek"));

        gridLayout->addWidget(comboBoxDayInWeek, 0, 10, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setEnabled(true);
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        comboBoxFloor_2 = new QComboBox(tab_2);
        comboBoxFloor_2->setObjectName(QStringLiteral("comboBoxFloor_2"));

        gridLayout_3->addWidget(comboBoxFloor_2, 0, 1, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);

        comboBoxIp_2 = new QComboBox(tab_2);
        comboBoxIp_2->setObjectName(QStringLiteral("comboBoxIp_2"));

        gridLayout_3->addWidget(comboBoxIp_2, 0, 3, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_3->addWidget(label_11, 0, 4, 1, 1);

        comboBoxHourStart_2 = new QComboBox(tab_2);
        comboBoxHourStart_2->setObjectName(QStringLiteral("comboBoxHourStart_2"));

        gridLayout_3->addWidget(comboBoxHourStart_2, 0, 5, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_3->addWidget(label_12, 0, 6, 1, 1);

        comboBoxHourFinish_2 = new QComboBox(tab_2);
        comboBoxHourFinish_2->setObjectName(QStringLiteral("comboBoxHourFinish_2"));

        gridLayout_3->addWidget(comboBoxHourFinish_2, 0, 7, 1, 1);

        pushButtonFilter = new QPushButton(tab_2);
        pushButtonFilter->setObjectName(QStringLiteral("pushButtonFilter"));

        gridLayout_3->addWidget(pushButtonFilter, 0, 8, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_3->addWidget(label_16, 1, 0, 1, 1);

        comboBoxDeviceType_2 = new QComboBox(tab_2);
        comboBoxDeviceType_2->setObjectName(QStringLiteral("comboBoxDeviceType_2"));

        gridLayout_3->addWidget(comboBoxDeviceType_2, 1, 1, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_3->addWidget(label_13, 1, 2, 1, 1);

        comboBoxDevice_2 = new QComboBox(tab_2);
        comboBoxDevice_2->setObjectName(QStringLiteral("comboBoxDevice_2"));

        gridLayout_3->addWidget(comboBoxDevice_2, 1, 3, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_3->addWidget(label_15, 1, 4, 1, 1);

        comboBoxMinuteStart_2 = new QComboBox(tab_2);
        comboBoxMinuteStart_2->setObjectName(QStringLiteral("comboBoxMinuteStart_2"));

        gridLayout_3->addWidget(comboBoxMinuteStart_2, 1, 5, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_3->addWidget(label_14, 1, 6, 1, 1);

        comboBoxMinuteFinish_2 = new QComboBox(tab_2);
        comboBoxMinuteFinish_2->setObjectName(QStringLiteral("comboBoxMinuteFinish_2"));

        gridLayout_3->addWidget(comboBoxMinuteFinish_2, 1, 7, 1, 1);

        pushButtonCancel_2 = new QPushButton(tab_2);
        pushButtonCancel_2->setObjectName(QStringLiteral("pushButtonCancel_2"));

        gridLayout_3->addWidget(pushButtonCancel_2, 1, 8, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        tableViewResult = new QTableView(tab_2);
        tableViewResult->setObjectName(QStringLiteral("tableViewResult"));

        gridLayout_4->addWidget(tableViewResult, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1042, 22));
        menu1 = new QMenu(menuBar);
        menu1->setObjectName(QStringLiteral("menu1"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu1->menuAction());
        menu1->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Device manager software", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "T\303\252n thi\341\272\277t b\341\273\213", Q_NULLPTR));
        pushButtonSetUp->setText(QApplication::translate("MainWindow", "L\341\272\255p l\341\273\213ch l\303\240m vi\341\273\207c", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Ph\303\272t k\341\272\277t th\303\272c", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Ip", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Gi\341\273\235 k\341\272\277t th\303\272c", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Lo\341\272\241i thi\341\272\277t b\341\273\213", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "T\341\272\247ng", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Ph\303\272t b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("MainWindow", "H\341\273\247y b\341\273\217", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Gi\341\273\235 b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Th\341\273\251", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Set up scheduler", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "T\341\272\247ng", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Ip", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Gi\341\273\235 b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Gi\341\273\235 k\341\272\277t th\303\272c", Q_NULLPTR));
        pushButtonFilter->setText(QApplication::translate("MainWindow", "Tra c\341\273\251u", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Lo\341\272\241i thi\341\272\277t b\341\273\213", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "T\303\252n thi\341\272\277t b\341\273\213", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Ph\303\272t b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Ph\303\272t k\341\272\277t th\303\272c", Q_NULLPTR));
        pushButtonCancel_2->setText(QApplication::translate("MainWindow", "H\341\273\247y b\341\273\217", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "History", Q_NULLPTR));
        menu1->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
