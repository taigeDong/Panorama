#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket> // Include this header
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTcpSocket *socket; // Declare the socket here
    QTimer *timer;



private slots:
    void on_pushButton_clicked(); // Ensure this declaration exists
    void on_pushButton_2_clicked();
    void updateTime();
};

#endif // MAINWINDOW_H
