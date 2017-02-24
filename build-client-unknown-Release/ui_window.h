/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowForm
{
public:
    QPushButton *closeButton;
    QPushButton *minsizeButton;
    QFrame *avatarFrame;
    QPushButton *addFriendButton;
    QPushButton *aboutButton;
    QStackedWidget *friendStackedWidget;
    QWidget *friendStackedWidgetPage1;
    QPushButton *btn_QQGroup;
    QPushButton *btn_QQFriend;

    void setupUi(QWidget *windowForm)
    {
        if (windowForm->objectName().isEmpty())
            windowForm->setObjectName(QString::fromUtf8("windowForm"));
        windowForm->resize(274, 624);
        closeButton = new QPushButton(windowForm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(240, 0, 31, 31));
        closeButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        minsizeButton = new QPushButton(windowForm);
        minsizeButton->setObjectName(QString::fromUtf8("minsizeButton"));
        minsizeButton->setGeometry(QRect(210, 0, 31, 31));
        minsizeButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        avatarFrame = new QFrame(windowForm);
        avatarFrame->setObjectName(QString::fromUtf8("avatarFrame"));
        avatarFrame->setGeometry(QRect(20, 30, 80, 80));
        avatarFrame->setMinimumSize(QSize(80, 80));
        avatarFrame->setMaximumSize(QSize(80, 80));
        avatarFrame->setFrameShape(QFrame::StyledPanel);
        avatarFrame->setFrameShadow(QFrame::Raised);
        addFriendButton = new QPushButton(windowForm);
        addFriendButton->setObjectName(QString::fromUtf8("addFriendButton"));
        addFriendButton->setGeometry(QRect(59, 590, 75, 23));
        aboutButton = new QPushButton(windowForm);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setGeometry(QRect(140, 590, 75, 23));
        friendStackedWidget = new QStackedWidget(windowForm);
        friendStackedWidget->setObjectName(QString::fromUtf8("friendStackedWidget"));
        friendStackedWidget->setGeometry(QRect(1, 160, 271, 411));
        friendStackedWidget->setMinimumSize(QSize(0, 300));
        friendStackedWidget->setStyleSheet(QString::fromUtf8(""));
        friendStackedWidgetPage1 = new QWidget();
        friendStackedWidgetPage1->setObjectName(QString::fromUtf8("friendStackedWidgetPage1"));
        friendStackedWidget->addWidget(friendStackedWidgetPage1);
        btn_QQGroup = new QPushButton(windowForm);
        btn_QQGroup->setObjectName(QString::fromUtf8("btn_QQGroup"));
        btn_QQGroup->setGeometry(QRect(140, 120, 111, 35));
        btn_QQGroup->setMinimumSize(QSize(0, 35));
        btn_QQGroup->setMaximumSize(QSize(16777215, 40));
        btn_QQGroup->setStyleSheet(QString::fromUtf8(""));
        btn_QQFriend = new QPushButton(windowForm);
        btn_QQFriend->setObjectName(QString::fromUtf8("btn_QQFriend"));
        btn_QQFriend->setGeometry(QRect(20, 120, 111, 35));
        btn_QQFriend->setMinimumSize(QSize(0, 35));
        btn_QQFriend->setMaximumSize(QSize(16777215, 50));
        btn_QQFriend->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(windowForm);

        QMetaObject::connectSlotsByName(windowForm);
    } // setupUi

    void retranslateUi(QWidget *windowForm)
    {
        windowForm->setWindowTitle(QApplication::translate("windowForm", "Form", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("windowForm", "\303\227", 0, QApplication::UnicodeUTF8));
        minsizeButton->setText(QApplication::translate("windowForm", "-", 0, QApplication::UnicodeUTF8));
        addFriendButton->setText(QApplication::translate("windowForm", "\346\267\273\345\212\240\345\245\275\345\217\213", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("windowForm", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        btn_QQGroup->setText(QString());
        btn_QQFriend->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class windowForm: public Ui_windowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
