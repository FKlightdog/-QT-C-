/********************************************************************************
** Form generated from reading UI file 'teachermenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERMENUWIDGET_H
#define UI_TEACHERMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teacherMenuWidget
{
public:
    QPushButton *addButton;
    QPushButton *modifyButton;
    QPushButton *selectButton;
    QPushButton *sortButton;
    QLabel *label;

    void setupUi(QWidget *teacherMenuWidget)
    {
        if (teacherMenuWidget->objectName().isEmpty())
            teacherMenuWidget->setObjectName(QString::fromUtf8("teacherMenuWidget"));
        teacherMenuWidget->resize(672, 350);
        addButton = new QPushButton(teacherMenuWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(450, 50, 80, 41));
        modifyButton = new QPushButton(teacherMenuWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(450, 119, 80, 41));
        selectButton = new QPushButton(teacherMenuWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(450, 180, 80, 41));
        sortButton = new QPushButton(teacherMenuWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(450, 240, 80, 41));
        label = new QLabel(teacherMenuWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 0, 351, 161));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);

        retranslateUi(teacherMenuWidget);

        QMetaObject::connectSlotsByName(teacherMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *teacherMenuWidget)
    {
        teacherMenuWidget->setWindowTitle(QCoreApplication::translate("teacherMenuWidget", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("teacherMenuWidget", "\346\267\273\345\212\240\347\252\227\345\217\243", nullptr));
        modifyButton->setText(QCoreApplication::translate("teacherMenuWidget", "\344\277\256\346\224\271\347\252\227\345\217\243", nullptr));
        selectButton->setText(QCoreApplication::translate("teacherMenuWidget", "\346\237\245\350\257\242\347\252\227\345\217\243", nullptr));
        sortButton->setText(QCoreApplication::translate("teacherMenuWidget", "\346\216\222\345\272\217\347\252\227\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("teacherMenuWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\346\225\231\345\270\210\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class teacherMenuWidget: public Ui_teacherMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERMENUWIDGET_H
