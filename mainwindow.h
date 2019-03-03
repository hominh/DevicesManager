#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qdebug.h"
#include "databaseconnection.h"
#include <QSqlQueryModel>
#include <QSqlQuery>
#include "tcpserver.h"
#include "tcpconnection.h"
#include <QMessageBox>

#define MAX_HOUR    23
#define MAX_MINUTE  59

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init();
    bool isConnect;

private slots:
    void on_pushButtonSetUp_clicked();
    void on_pushButtonCancel_clicked();

    void on_pushButtonFilter_clicked();

    void on_pushButtonCancel_2_clicked();

public slots:



private:
    Ui::MainWindow *ui;
    DatabaseConnection *dbConnection;
    QSqlQueryModel *model,*modelDevice;
    void SetupTablView(QSqlQueryModel *model);
    void incomingConnection(int socketDescriptor);
    TcpConnection *tcpconnection;
    TcpServer m_server;

};


#endif // MAINWINDOW_H
