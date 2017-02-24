/********************************************************************************
** Form generated from reading UI file 'chatRoom.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATROOM_H
#define UI_CHATROOM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "inputtextedit.h"

QT_BEGIN_NAMESPACE

class Ui_chatroomWidget
{
public:
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *outputTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *colorPushButton;
    QPushButton *FontsPushButton;
    QPushButton *recordPushButton;
    InputTextEdit *inputTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closePushButton;
    QPushButton *sendPushButton;
    QFrame *avatarFrame;
    QLabel *label;
    QPushButton *closeButton;
    QPushButton *minsizeButton;
    QLabel *label_2;

    void setupUi(QWidget *chatroomWidget)
    {
        if (chatroomWidget->objectName().isEmpty())
            chatroomWidget->setObjectName(QString::fromUtf8("chatroomWidget"));
        chatroomWidget->resize(559, 528);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chatroomWidget->sizePolicy().hasHeightForWidth());
        chatroomWidget->setSizePolicy(sizePolicy);
        plainTextEdit_2 = new QPlainTextEdit(chatroomWidget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(420, 280, 131, 231));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/3.png);"));
        plainTextEdit_3 = new QPlainTextEdit(chatroomWidget);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(420, 30, 131, 231));
        plainTextEdit_3->setStyleSheet(QString::fromUtf8("background-image: url(:/pictures/2.png);"));
        layoutWidget = new QWidget(chatroomWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 401, 421));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        outputTextEdit = new QTextEdit(layoutWidget);
        outputTextEdit->setObjectName(QString::fromUtf8("outputTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(100);
        sizePolicy1.setVerticalStretch(80);
        sizePolicy1.setHeightForWidth(outputTextEdit->sizePolicy().hasHeightForWidth());
        outputTextEdit->setSizePolicy(sizePolicy1);
        outputTextEdit->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(outputTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        colorPushButton = new QPushButton(layoutWidget);
        colorPushButton->setObjectName(QString::fromUtf8("colorPushButton"));

        horizontalLayout->addWidget(colorPushButton);

        FontsPushButton = new QPushButton(layoutWidget);
        FontsPushButton->setObjectName(QString::fromUtf8("FontsPushButton"));

        horizontalLayout->addWidget(FontsPushButton);

        recordPushButton = new QPushButton(layoutWidget);
        recordPushButton->setObjectName(QString::fromUtf8("recordPushButton"));

        horizontalLayout->addWidget(recordPushButton);


        verticalLayout_2->addLayout(horizontalLayout);

        inputTextEdit = new InputTextEdit(layoutWidget);
        inputTextEdit->setObjectName(QString::fromUtf8("inputTextEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(inputTextEdit->sizePolicy().hasHeightForWidth());
        inputTextEdit->setSizePolicy(sizePolicy2);
        inputTextEdit->setMinimumSize(QSize(0, 80));
        inputTextEdit->setMaximumSize(QSize(16777215, 80));

        verticalLayout_2->addWidget(inputTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        closePushButton = new QPushButton(layoutWidget);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));

        horizontalLayout_2->addWidget(closePushButton);

        sendPushButton = new QPushButton(layoutWidget);
        sendPushButton->setObjectName(QString::fromUtf8("sendPushButton"));

        horizontalLayout_2->addWidget(sendPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        avatarFrame = new QFrame(chatroomWidget);
        avatarFrame->setObjectName(QString::fromUtf8("avatarFrame"));
        avatarFrame->setGeometry(QRect(20, 10, 60, 60));
        avatarFrame->setMinimumSize(QSize(60, 60));
        avatarFrame->setMaximumSize(QSize(60, 60));
        avatarFrame->setFrameShape(QFrame::StyledPanel);
        avatarFrame->setFrameShadow(QFrame::Raised);
        label = new QLabel(chatroomWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 510, 222, 12));
        closeButton = new QPushButton(chatroomWidget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(530, 0, 31, 31));
        closeButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        minsizeButton = new QPushButton(chatroomWidget);
        minsizeButton->setObjectName(QString::fromUtf8("minsizeButton"));
        minsizeButton->setGeometry(QRect(500, 0, 31, 31));
        minsizeButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        label_2 = new QLabel(chatroomWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 0, 211, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 15pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(chatroomWidget);

        QMetaObject::connectSlotsByName(chatroomWidget);
    } // setupUi

    void retranslateUi(QWidget *chatroomWidget)
    {
        chatroomWidget->setWindowTitle(QApplication::translate("chatroomWidget", "Form", 0, QApplication::UnicodeUTF8));
        colorPushButton->setText(QApplication::translate("chatroomWidget", "\350\256\276\347\275\256\351\242\234\350\211\262", 0, QApplication::UnicodeUTF8));
        FontsPushButton->setText(QApplication::translate("chatroomWidget", "\350\256\276\347\275\256\345\255\227\344\275\223", 0, QApplication::UnicodeUTF8));
        recordPushButton->setText(QApplication::translate("chatroomWidget", "\350\201\212\345\244\251\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("chatroomWidget", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        sendPushButton->setText(QApplication::translate("chatroomWidget", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("chatroomWidget", "\346\217\220\347\244\272\357\274\232\346\214\211\344\270\213Ctrl+Enter \345\217\257\344\273\245\347\233\264\346\216\245\345\217\221\351\200\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("chatroomWidget", "\303\227", 0, QApplication::UnicodeUTF8));
        minsizeButton->setText(QApplication::translate("chatroomWidget", "-", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("chatroomWidget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chatroomWidget: public Ui_chatroomWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATROOM_H
