/********************************************************************************
** Form generated from reading UI file 'loginBox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINBOX_H
#define UI_LOGINBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginBoxForm
{
public:
    QPushButton *loginPushButton;
    QPushButton *registerPushButton;
    QLineEdit *accountLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *closeButton;
    QPushButton *minsizeButton;
    QCheckBox *checkBox;

    void setupUi(QWidget *loginBoxForm)
    {
        if (loginBoxForm->objectName().isEmpty())
            loginBoxForm->setObjectName(QString::fromUtf8("loginBoxForm"));
        loginBoxForm->resize(431, 321);
        loginPushButton = new QPushButton(loginBoxForm);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(130, 270, 161, 41));
        loginPushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 255);"));
        registerPushButton = new QPushButton(loginBoxForm);
        registerPushButton->setObjectName(QString::fromUtf8("registerPushButton"));
        registerPushButton->setGeometry(QRect(310, 190, 81, 31));
        registerPushButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        accountLineEdit = new QLineEdit(loginBoxForm);
        accountLineEdit->setObjectName(QString::fromUtf8("accountLineEdit"));
        accountLineEdit->setGeometry(QRect(140, 190, 161, 31));
        passwordLineEdit = new QLineEdit(loginBoxForm);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(140, 230, 161, 31));
        closeButton = new QPushButton(loginBoxForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(410, 0, 21, 21));
        closeButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        minsizeButton = new QPushButton(loginBoxForm);
        minsizeButton->setObjectName(QString::fromUtf8("minsizeButton"));
        minsizeButton->setGeometry(QRect(390, 0, 21, 21));
        minsizeButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        checkBox = new QCheckBox(loginBoxForm);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(320, 240, 71, 16));

        retranslateUi(loginBoxForm);

        QMetaObject::connectSlotsByName(loginBoxForm);
    } // setupUi

    void retranslateUi(QWidget *loginBoxForm)
    {
        loginBoxForm->setWindowTitle(QApplication::translate("loginBoxForm", "Form", 0, QApplication::UnicodeUTF8));
        loginPushButton->setText(QApplication::translate("loginBoxForm", "\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
        registerPushButton->setText(QApplication::translate("loginBoxForm", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("loginBoxForm", "\303\227", 0, QApplication::UnicodeUTF8));
        minsizeButton->setText(QApplication::translate("loginBoxForm", "-", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("loginBoxForm", "\351\232\220\350\272\253\347\231\273\351\231\206", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loginBoxForm: public Ui_loginBoxForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINBOX_H
