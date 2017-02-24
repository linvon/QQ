/********************************************************************************
** Form generated from reading UI file 'informationBox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONBOX_H
#define UI_INFORMATIONBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_informationBoxForm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *LoginLabel;
    QLineEdit *accountLineEdit;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QLabel *label_3;
    QLineEdit *confirmPwdLineEdit;
    QLabel *label_4;
    QLineEdit *nicknameLineEdit;
    QGridLayout *gridLayout_2;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QFrame *avatarFrame;
    QLabel *avatarLabel;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pastButton;
    QPushButton *nextButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *quitPushButton;
    QPushButton *OKPushButton;

    void setupUi(QWidget *informationBoxForm)
    {
        if (informationBoxForm->objectName().isEmpty())
            informationBoxForm->setObjectName(QString::fromUtf8("informationBoxForm"));
        informationBoxForm->resize(390, 249);
        widget = new QWidget(informationBoxForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 319, 174));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        LoginLabel = new QLabel(widget);
        LoginLabel->setObjectName(QString::fromUtf8("LoginLabel"));

        verticalLayout->addWidget(LoginLabel);

        accountLineEdit = new QLineEdit(widget);
        accountLineEdit->setObjectName(QString::fromUtf8("accountLineEdit"));

        verticalLayout->addWidget(accountLineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        passwordLineEdit = new QLineEdit(widget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        verticalLayout->addWidget(passwordLineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        confirmPwdLineEdit = new QLineEdit(widget);
        confirmPwdLineEdit->setObjectName(QString::fromUtf8("confirmPwdLineEdit"));

        verticalLayout->addWidget(confirmPwdLineEdit);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        nicknameLineEdit = new QLineEdit(widget);
        nicknameLineEdit->setObjectName(QString::fromUtf8("nicknameLineEdit"));

        verticalLayout->addWidget(nicknameLineEdit);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 0, 0, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        avatarFrame = new QFrame(widget);
        avatarFrame->setObjectName(QString::fromUtf8("avatarFrame"));
        avatarFrame->setMinimumSize(QSize(80, 80));
        avatarFrame->setMaximumSize(QSize(80, 80));
        avatarFrame->setFrameShape(QFrame::StyledPanel);
        avatarFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(avatarFrame);

        avatarLabel = new QLabel(widget);
        avatarLabel->setObjectName(QString::fromUtf8("avatarLabel"));

        verticalLayout_2->addWidget(avatarLabel);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pastButton = new QPushButton(widget);
        pastButton->setObjectName(QString::fromUtf8("pastButton"));

        horizontalLayout->addWidget(pastButton);

        nextButton = new QPushButton(widget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout->addWidget(nextButton);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);

        quitPushButton = new QPushButton(informationBoxForm);
        quitPushButton->setObjectName(QString::fromUtf8("quitPushButton"));
        quitPushButton->setGeometry(QRect(80, 210, 75, 23));
        OKPushButton = new QPushButton(informationBoxForm);
        OKPushButton->setObjectName(QString::fromUtf8("OKPushButton"));
        OKPushButton->setGeometry(QRect(230, 210, 75, 23));

        retranslateUi(informationBoxForm);

        QMetaObject::connectSlotsByName(informationBoxForm);
    } // setupUi

    void retranslateUi(QWidget *informationBoxForm)
    {
        informationBoxForm->setWindowTitle(QApplication::translate("informationBoxForm", "Form", 0, QApplication::UnicodeUTF8));
        LoginLabel->setText(QApplication::translate("informationBoxForm", "\345\270\220\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("informationBoxForm", "\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("informationBoxForm", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("informationBoxForm", "\345\221\242\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("informationBoxForm", "\351\200\211\346\213\251\345\244\264\345\203\217\357\274\232", 0, QApplication::UnicodeUTF8));
        avatarLabel->setText(QApplication::translate("informationBoxForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        pastButton->setText(QApplication::translate("informationBoxForm", "\344\270\212\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("informationBoxForm", "\344\270\213\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        quitPushButton->setText(QApplication::translate("informationBoxForm", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        OKPushButton->setText(QApplication::translate("informationBoxForm", "\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class informationBoxForm: public Ui_informationBoxForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONBOX_H
