#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->errorLabel->setText(""); // 初始化错误标签为空
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "1234") {
        emit loginSuccessful();
        accept(); // 关闭登录对话框
    } else {
        ui->errorLabel->setText("用户名或密码错误！");
    }
}

void LoginDialog::on_cancelButton_clicked()
{
    reject(); // 关闭登录对话框
}
