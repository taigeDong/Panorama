#include <QApplication>
#include "logindialog.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LoginDialog loginDialog;
    MainWindow mainWindow;

    QObject::connect(&loginDialog, &LoginDialog::loginSuccessful, [&mainWindow]() {
        mainWindow.show();
    });

    if (loginDialog.exec() == QDialog::Accepted) {
        return a.exec();
    } else {
        return 0;
    }
}
