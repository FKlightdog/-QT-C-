/********************************************************************************
** Form generated from reading UI file 'selectstudentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTSTUDENTWIDGET_H
#define UI_SELECTSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectStudentWidget
{
public:
    QPushButton *returnButton;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QLabel *nameLabel;
    QLabel *showNameLabel;
    QLabel *mathLabel;
    QLabel *showMathLabel;
    QLabel *enLabel;
    QLabel *showEnLabel;
    QLabel *cLabel;
    QLabel *showCLabel;
    QPushButton *selectButton;

    void setupUi(QWidget *SelectStudentWidget)
    {
        if (SelectStudentWidget->objectName().isEmpty())
            SelectStudentWidget->setObjectName(QString::fromUtf8("SelectStudentWidget"));
        SelectStudentWidget->resize(671, 347);
        returnButton = new QPushButton(SelectStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(480, 50, 80, 41));
        idLabel = new QLabel(SelectStudentWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(100, 71, 54, 31));
        idLineEdit = new QLineEdit(SelectStudentWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(170, 80, 161, 20));
        idLineEdit->setMaxLength(26);
        nameLabel = new QLabel(SelectStudentWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(100, 101, 54, 31));
        showNameLabel = new QLabel(SelectStudentWidget);
        showNameLabel->setObjectName(QString::fromUtf8("showNameLabel"));
        showNameLabel->setGeometry(QRect(170, 110, 81, 16));
        mathLabel = new QLabel(SelectStudentWidget);
        mathLabel->setObjectName(QString::fromUtf8("mathLabel"));
        mathLabel->setGeometry(QRect(80, 125, 81, 41));
        showMathLabel = new QLabel(SelectStudentWidget);
        showMathLabel->setObjectName(QString::fromUtf8("showMathLabel"));
        showMathLabel->setGeometry(QRect(170, 140, 91, 16));
        enLabel = new QLabel(SelectStudentWidget);
        enLabel->setObjectName(QString::fromUtf8("enLabel"));
        enLabel->setGeometry(QRect(80, 155, 71, 51));
        showEnLabel = new QLabel(SelectStudentWidget);
        showEnLabel->setObjectName(QString::fromUtf8("showEnLabel"));
        showEnLabel->setGeometry(QRect(170, 170, 101, 16));
        cLabel = new QLabel(SelectStudentWidget);
        cLabel->setObjectName(QString::fromUtf8("cLabel"));
        cLabel->setGeometry(QRect(93, 191, 61, 31));
        showCLabel = new QLabel(SelectStudentWidget);
        showCLabel->setObjectName(QString::fromUtf8("showCLabel"));
        showCLabel->setGeometry(QRect(170, 200, 101, 16));
        selectButton = new QPushButton(SelectStudentWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(220, 250, 121, 41));

        retranslateUi(SelectStudentWidget);

        QMetaObject::connectSlotsByName(SelectStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectStudentWidget)
    {
        SelectStudentWidget->setWindowTitle(QCoreApplication::translate("SelectStudentWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SelectStudentWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        idLabel->setText(QCoreApplication::translate("SelectStudentWidget", "\345\255\246\345\217\267\357\274\232", nullptr));
        nameLabel->setText(QCoreApplication::translate("SelectStudentWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        showNameLabel->setText(QCoreApplication::translate("SelectStudentWidget", "NULL", nullptr));
        mathLabel->setText(QCoreApplication::translate("SelectStudentWidget", "\346\225\260\345\255\246\345\210\206\346\236\220\357\274\232", nullptr));
        showMathLabel->setText(QCoreApplication::translate("SelectStudentWidget", "NULL", nullptr));
        enLabel->setText(QCoreApplication::translate("SelectStudentWidget", "\350\213\261\350\257\255\345\233\233\347\272\247\357\274\232", nullptr));
        showEnLabel->setText(QCoreApplication::translate("SelectStudentWidget", "NULL", nullptr));
        cLabel->setText(QCoreApplication::translate("SelectStudentWidget", "C++\357\274\232", nullptr));
        showCLabel->setText(QCoreApplication::translate("SelectStudentWidget", "NULL", nullptr));
        selectButton->setText(QCoreApplication::translate("SelectStudentWidget", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectStudentWidget: public Ui_SelectStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTSTUDENTWIDGET_H
