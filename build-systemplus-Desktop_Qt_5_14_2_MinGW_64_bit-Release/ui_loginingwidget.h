/********************************************************************************
** Form generated from reading UI file 'loginingwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININGWIDGET_H
#define UI_LOGININGWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginingWidget
{
public:
    QLabel *idLabel;
    QLabel *passwordLabel;
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *admPushButton;
    QPushButton *teacherPushButton;
    QPushButton *tipButton;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *LoginingWidget)
    {
        if (LoginingWidget->objectName().isEmpty())
            LoginingWidget->setObjectName(QString::fromUtf8("LoginingWidget"));
        idLabel = new QLabel(LoginingWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(115, 110, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        idLabel->setFont(font);
        passwordLabel = new QLabel(LoginingWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(110, 160, 41, 31));
        passwordLabel->setFont(font);
        idLineEdit = new QLineEdit(LoginingWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(170, 110, 201, 22));
        idLineEdit->setMaxLength(26);
        idLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        passwordLineEdit = new QLineEdit(LoginingWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(170, 160, 201, 22));
        passwordLineEdit->setMaxLength(26);
        passwordLineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);
        admPushButton = new QPushButton(LoginingWidget);
        admPushButton->setObjectName(QString::fromUtf8("admPushButton"));
        admPushButton->setGeometry(QRect(130, 220, 101, 31));
        teacherPushButton = new QPushButton(LoginingWidget);
        teacherPushButton->setObjectName(QString::fromUtf8("teacherPushButton"));
        teacherPushButton->setGeometry(QRect(290, 220, 91, 31));
        tipButton = new QPushButton(LoginingWidget);
        tipButton->setObjectName(QString::fromUtf8("tipButton"));
        tipButton->setGeometry(QRect(510, 220, 81, 31));
        pushButton = new QPushButton(LoginingWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 50, 80, 31));
        label = new QLabel(LoginingWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 451, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(12);
        label->setFont(font1);

        retranslateUi(LoginingWidget);

        QMetaObject::connectSlotsByName(LoginingWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginingWidget)
    {
        LoginingWidget->setWindowTitle(QCoreApplication::translate("LoginingWidget", "Form", nullptr));
        idLabel->setText(QCoreApplication::translate("LoginingWidget", "<html><head/><body><p align=\"center\">\350\264\246\345\217\267\357\274\232</p></body></html>", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LoginingWidget", "<html><head/><body><p align=\"center\">\345\257\206\347\240\201\357\274\232</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        idLineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        idLineEdit->setPlaceholderText(QCoreApplication::translate("LoginingWidget", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\350\264\246\345\217\267", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("LoginingWidget", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\345\257\206\347\240\201\357\274\232", nullptr));
        admPushButton->setText(QCoreApplication::translate("LoginingWidget", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        teacherPushButton->setText(QCoreApplication::translate("LoginingWidget", "\346\225\231\345\270\210\347\231\273\345\275\225", nullptr));
        tipButton->setText(QCoreApplication::translate("LoginingWidget", "\346\263\250\351\207\212", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginingWidget", "\345\205\215\350\264\243\350\257\264\346\230\216", nullptr));
        label->setText(QCoreApplication::translate("LoginingWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237</span><span style=\" font-size:14pt; vertical-align:sub;\">based on QT</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginingWidget: public Ui_LoginingWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININGWIDGET_H
