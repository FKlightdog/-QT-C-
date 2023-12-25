/********************************************************************************
** Form generated from reading UI file 'sortstudentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTSTUDENTWIDGET_H
#define UI_SORTSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortStudentWidget
{
public:
    QPushButton *returnButton;
    QRadioButton *mathRadioButton;
    QRadioButton *enRadioButton;
    QRadioButton *cRadioButton;
    QRadioButton *avgRadioButton;
    QPushButton *sortButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SortStudentWidget)
    {
        if (SortStudentWidget->objectName().isEmpty())
            SortStudentWidget->setObjectName(QString::fromUtf8("SortStudentWidget"));
        SortStudentWidget->resize(669, 347);
        returnButton = new QPushButton(SortStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(440, 40, 80, 41));
        mathRadioButton = new QRadioButton(SortStudentWidget);
        mathRadioButton->setObjectName(QString::fromUtf8("mathRadioButton"));
        mathRadioButton->setGeometry(QRect(10, 50, 101, 31));
        enRadioButton = new QRadioButton(SortStudentWidget);
        enRadioButton->setObjectName(QString::fromUtf8("enRadioButton"));
        enRadioButton->setGeometry(QRect(110, 50, 121, 31));
        cRadioButton = new QRadioButton(SortStudentWidget);
        cRadioButton->setObjectName(QString::fromUtf8("cRadioButton"));
        cRadioButton->setGeometry(QRect(230, 57, 91, 21));
        avgRadioButton = new QRadioButton(SortStudentWidget);
        avgRadioButton->setObjectName(QString::fromUtf8("avgRadioButton"));
        avgRadioButton->setGeometry(QRect(320, 47, 111, 31));
        sortButton = new QPushButton(SortStudentWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(550, 40, 80, 41));
        tableWidget = new QTableWidget(SortStudentWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(30, 100, 591, 231));

        retranslateUi(SortStudentWidget);

        QMetaObject::connectSlotsByName(SortStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *SortStudentWidget)
    {
        SortStudentWidget->setWindowTitle(QCoreApplication::translate("SortStudentWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SortStudentWidget", "\344\270\273\350\217\234\345\215\225 ", nullptr));
        mathRadioButton->setText(QCoreApplication::translate("SortStudentWidget", "\346\225\260\345\255\246\345\210\206\346\236\220", nullptr));
        enRadioButton->setText(QCoreApplication::translate("SortStudentWidget", "\350\213\261\350\257\255\345\233\233\347\272\247", nullptr));
        cRadioButton->setText(QCoreApplication::translate("SortStudentWidget", "C++", nullptr));
        avgRadioButton->setText(QCoreApplication::translate("SortStudentWidget", "\345\271\263\345\235\207\346\210\220\347\273\251", nullptr));
        sortButton->setText(QCoreApplication::translate("SortStudentWidget", "\346\216\222\345\272\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortStudentWidget: public Ui_SortStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTSTUDENTWIDGET_H
