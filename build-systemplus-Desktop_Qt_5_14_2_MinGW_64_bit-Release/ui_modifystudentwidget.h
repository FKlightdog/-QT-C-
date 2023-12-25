/********************************************************************************
** Form generated from reading UI file 'modifystudentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSTUDENTWIDGET_H
#define UI_MODIFYSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyStudentWidget
{
public:
    QPushButton *returnButton;
    QLabel *nameLabel;
    QLabel *mathLabel;
    QLabel *enLabel;
    QLabel *cLabel;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QPushButton *modifyButton;
    QLineEdit *nameLineEdit;
    QLineEdit *mathLineEdit;
    QLineEdit *enLineEdit;
    QLineEdit *cLineEdit;

    void setupUi(QWidget *ModifyStudentWidget)
    {
        if (ModifyStudentWidget->objectName().isEmpty())
            ModifyStudentWidget->setObjectName(QString::fromUtf8("ModifyStudentWidget"));
        ModifyStudentWidget->resize(669, 348);
        returnButton = new QPushButton(ModifyStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(510, 60, 91, 51));
        nameLabel = new QLabel(ModifyStudentWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(123, 69, 71, 31));
        mathLabel = new QLabel(ModifyStudentWidget);
        mathLabel->setObjectName(QString::fromUtf8("mathLabel"));
        mathLabel->setGeometry(QRect(100, 100, 81, 31));
        enLabel = new QLabel(ModifyStudentWidget);
        enLabel->setObjectName(QString::fromUtf8("enLabel"));
        enLabel->setGeometry(QRect(100, 130, 71, 31));
        cLabel = new QLabel(ModifyStudentWidget);
        cLabel->setObjectName(QString::fromUtf8("cLabel"));
        cLabel->setGeometry(QRect(103, 160, 91, 31));
        idLabel = new QLabel(ModifyStudentWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(103, 240, 71, 31));
        idLineEdit = new QLineEdit(ModifyStudentWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(210, 240, 221, 20));
        modifyButton = new QPushButton(ModifyStudentWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(510, 209, 91, 61));
        nameLineEdit = new QLineEdit(ModifyStudentWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(210, 70, 211, 20));
        mathLineEdit = new QLineEdit(ModifyStudentWidget);
        mathLineEdit->setObjectName(QString::fromUtf8("mathLineEdit"));
        mathLineEdit->setGeometry(QRect(210, 100, 211, 20));
        enLineEdit = new QLineEdit(ModifyStudentWidget);
        enLineEdit->setObjectName(QString::fromUtf8("enLineEdit"));
        enLineEdit->setGeometry(QRect(210, 130, 211, 20));
        cLineEdit = new QLineEdit(ModifyStudentWidget);
        cLineEdit->setObjectName(QString::fromUtf8("cLineEdit"));
        cLineEdit->setGeometry(QRect(210, 160, 211, 20));

        retranslateUi(ModifyStudentWidget);

        QMetaObject::connectSlotsByName(ModifyStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyStudentWidget)
    {
        ModifyStudentWidget->setWindowTitle(QCoreApplication::translate("ModifyStudentWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("ModifyStudentWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        nameLabel->setText(QCoreApplication::translate("ModifyStudentWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        mathLabel->setText(QCoreApplication::translate("ModifyStudentWidget", "\346\225\260\345\255\246\345\210\206\346\236\220\357\274\232", nullptr));
        enLabel->setText(QCoreApplication::translate("ModifyStudentWidget", "\350\213\261\350\257\255\345\233\233\347\272\247\357\274\232", nullptr));
        cLabel->setText(QCoreApplication::translate("ModifyStudentWidget", "C++\357\274\232", nullptr));
        idLabel->setText(QCoreApplication::translate("ModifyStudentWidget", "\345\255\246\345\217\267\357\274\232", nullptr));
        idLineEdit->setPlaceholderText(QCoreApplication::translate("ModifyStudentWidget", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        modifyButton->setText(QCoreApplication::translate("ModifyStudentWidget", "\344\277\256\346\224\271", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("ModifyStudentWidget", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        mathLineEdit->setPlaceholderText(QCoreApplication::translate("ModifyStudentWidget", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        enLineEdit->setPlaceholderText(QCoreApplication::translate("ModifyStudentWidget", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        cLineEdit->setPlaceholderText(QCoreApplication::translate("ModifyStudentWidget", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyStudentWidget: public Ui_ModifyStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSTUDENTWIDGET_H
