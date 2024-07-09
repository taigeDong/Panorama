/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QPushButton *loginButton;
    QPushButton *cancelButton;
    QLineEdit *passwordLineEdit;
    QLineEdit *usernameLineEdit;
    QLabel *a;
    QLabel *p;
    QLabel *errorLabel;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(672, 475);
        loginButton = new QPushButton(LoginDialog);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(290, 310, 81, 31));
        cancelButton = new QPushButton(LoginDialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(390, 310, 81, 31));
        passwordLineEdit = new QLineEdit(LoginDialog);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(180, 230, 113, 20));
        usernameLineEdit = new QLineEdit(LoginDialog);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(180, 190, 113, 20));
        a = new QLabel(LoginDialog);
        a->setObjectName("a");
        a->setGeometry(QRect(110, 190, 51, 16));
        p = new QLabel(LoginDialog);
        p->setObjectName("p");
        p->setGeometry(QRect(110, 230, 61, 16));
        errorLabel = new QLabel(LoginDialog);
        errorLabel->setObjectName("errorLabel");
        errorLabel->setGeometry(QRect(139, 160, 201, 21));
        label_4 = new QLabel(LoginDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(189, 120, 91, 21));
        label = new QLabel(LoginDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 130, 171, 161));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/C:/Users/Nv-na/Pictures/Saved Pictures/pic2.jpg")));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        cancelButton->setText(QCoreApplication::translate("LoginDialog", "Cancel", nullptr));
        a->setText(QCoreApplication::translate("LoginDialog", "Account", nullptr));
        p->setText(QCoreApplication::translate("LoginDialog", "Password", nullptr));
        errorLabel->setText(QString());
        label_4->setText(QCoreApplication::translate("LoginDialog", "Neusoft VCCS", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
