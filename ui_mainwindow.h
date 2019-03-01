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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_6;
    QPushButton *pushButtonCancel;
    QComboBox *comboBoxHourStart;
    QComboBox *comboBoxHourFinish;
    QPushButton *pushButtonSetUp;
    QTableView *tableView;
    QLabel *label_3;
    QComboBox *comboBoxFloor;
    QComboBox *comboBoxDevice;
    QLabel *label_2;
    QComboBox *comboBoxDeviceType;
    QLabel *label_8;
    QComboBox *comboBoxIp;
    QLabel *label_4;
    QComboBox *comboBoxMinuteStart;
    QComboBox *comboBoxMinuteFinish;
    QLabel *label_5;
    QLabel *label;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1134, 602);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 0, 7, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 5, 1, 1);

        pushButtonCancel = new QPushButton(tab);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        gridLayout->addWidget(pushButtonCancel, 1, 9, 1, 1);

        comboBoxHourStart = new QComboBox(tab);
        comboBoxHourStart->setObjectName(QStringLiteral("comboBoxHourStart"));

        gridLayout->addWidget(comboBoxHourStart, 0, 6, 1, 1);

        comboBoxHourFinish = new QComboBox(tab);
        comboBoxHourFinish->setObjectName(QStringLiteral("comboBoxHourFinish"));

        gridLayout->addWidget(comboBoxHourFinish, 0, 8, 1, 1);

        pushButtonSetUp = new QPushButton(tab);
        pushButtonSetUp->setObjectName(QStringLiteral("pushButtonSetUp"));

        gridLayout->addWidget(pushButtonSetUp, 0, 9, 1, 1);

        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 2, 0, 1, 10);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        comboBoxFloor = new QComboBox(tab);
        comboBoxFloor->setObjectName(QStringLiteral("comboBoxFloor"));

        gridLayout->addWidget(comboBoxFloor, 0, 1, 1, 1);

        comboBoxDevice = new QComboBox(tab);
        comboBoxDevice->setObjectName(QStringLiteral("comboBoxDevice"));

        gridLayout->addWidget(comboBoxDevice, 1, 4, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBoxDeviceType = new QComboBox(tab);
        comboBoxDeviceType->setObjectName(QStringLiteral("comboBoxDeviceType"));

        gridLayout->addWidget(comboBoxDeviceType, 1, 1, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 1, 7, 1, 1);

        comboBoxIp = new QComboBox(tab);
        comboBoxIp->setObjectName(QStringLiteral("comboBoxIp"));

        gridLayout->addWidget(comboBoxIp, 0, 3, 1, 2);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 2);

        comboBoxMinuteStart = new QComboBox(tab);
        comboBoxMinuteStart->setObjectName(QStringLiteral("comboBoxMinuteStart"));

        gridLayout->addWidget(comboBoxMinuteStart, 1, 6, 1, 1);

        comboBoxMinuteFinish = new QComboBox(tab);
        comboBoxMinuteFinish->setObjectName(QStringLiteral("comboBoxMinuteFinish"));

        gridLayout->addWidget(comboBoxMinuteFinish, 1, 8, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 5, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1134, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Device manager software", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Gi\341\273\235 k\341\272\277t th\303\272c", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Ph\303\272t b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("MainWindow", "H\341\273\247y b\341\273\217", Q_NULLPTR));
        pushButtonSetUp->setText(QApplication::translate("MainWindow", "L\341\272\255p l\341\273\213ch l\303\240m vi\341\273\207c", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Ip", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Lo\341\272\241i thi\341\272\277t b\341\273\213", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Ph\303\272t k\341\272\277t th\303\272c", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "T\303\252n thi\341\272\277t b\341\273\213", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Gi\341\273\235 b\341\272\257t \304\221\341\272\247u", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "T\341\272\247ng", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Set up scheduler", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Device manager", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
