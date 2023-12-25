/********************************************************************************
** Form generated from reading UI file 'admmenuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMMENUWIDGET_H
#define UI_ADMMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdmMenuWidget
{
public:
    QPushButton *addButton;
    QPushButton *selectstudentButton;
    QPushButton *selectTeacherButton;
    QLabel *label;
    QPushButton *addButton1;

    void setupUi(QWidget *AdmMenuWidget)
    {
        if (AdmMenuWidget->objectName().isEmpty())
            AdmMenuWidget->setObjectName(QString::fromUtf8("AdmMenuWidget"));
        AdmMenuWidget->resize(669, 356);
        addButton = new QPushButton(AdmMenuWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(419, 60, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        addButton->setFont(font);
        selectstudentButton = new QPushButton(AdmMenuWidget);
        selectstudentButton->setObjectName(QString::fromUtf8("selectstudentButton"));
        selectstudentButton->setGeometry(QRect(420, 200, 121, 41));
        selectstudentButton->setFont(font);
        selectTeacherButton = new QPushButton(AdmMenuWidget);
        selectTeacherButton->setObjectName(QString::fromUtf8("selectTeacherButton"));
        selectTeacherButton->setGeometry(QRect(420, 260, 121, 41));
        selectTeacherButton->setFont(font);
        label = new QLabel(AdmMenuWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 0, 311, 101));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        label->setFont(font1);
        addButton1 = new QPushButton(AdmMenuWidget);
        addButton1->setObjectName(QString::fromUtf8("addButton1"));
        addButton1->setGeometry(QRect(420, 130, 121, 41));
        addButton1->setFont(font);

        retranslateUi(AdmMenuWidget);

        QMetaObject::connectSlotsByName(AdmMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *AdmMenuWidget)
    {
        AdmMenuWidget->setWindowTitle(QCoreApplication::translate("AdmMenuWidget", "Form", nullptr));
        addButton->setText(QCoreApplication::translate("AdmMenuWidget", "\346\267\273\345\212\240\350\200\201\345\270\210", nullptr));
        selectstudentButton->setText(QCoreApplication::translate("AdmMenuWidget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        selectTeacherButton->setText(QCoreApplication::translate("AdmMenuWidget", "\346\237\245\350\257\242\350\200\201\345\270\210\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("AdmMenuWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt;\">\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", nullptr));
        addButton1->setText(QCoreApplication::translate("AdmMenuWidget", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdmMenuWidget: public Ui_AdmMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMMENUWIDGET_H
