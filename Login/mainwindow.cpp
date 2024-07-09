#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpSocket>
#include <QMessageBox>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket;
    // 初始化计时器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000); // 每秒更新一次

    // 初始化时间显示
    updateTime();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString ip = ui->lineEdit->text();
    QString port = ui->lineEdit_2->text();
    socket->connectToHost(QHostAddress(ip), port.toShort());
    connect(socket, &QTcpSocket::connected, [this]()
            {
                QMessageBox::information(this, "Message", "OK");
            });
    connect(socket, &QTcpSocket::disconnected, [this]()
            {
                QMessageBox::warning(this, "Message", "ERROR");
            });
}

void MainWindow::on_pushButton_2_clicked()
{
    QByteArray s1 = ui->lineEdit_3->text().toUtf8();
    socket->write(s1);
}
void MainWindow::updateTime()
{
    // 获取当前时间
    QDateTime currentTime = QDateTime::currentDateTime();
    QString timeString = currentTime.toString("yyyy-MM-dd hh:mm:ss");

    // 更新标签显示
    ui->timeLabel->setText(timeString);
}
