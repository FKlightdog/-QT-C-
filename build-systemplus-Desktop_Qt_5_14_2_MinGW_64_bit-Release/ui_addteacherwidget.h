/********************************************************************************
** Form generated from reading UI file 'addteacherwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTEACHERWIDGET_H
#define UI_ADDTEACHERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddTeacherWidget
{
public:
    QPushButton *returnButton;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *mathLabel;
    QLabel *enLabel;
    QLabel *cLabel;
    QLineEdit *idLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *mathLineEdit;
    QLineEdit *enLineEdit;
    QLineEdit *cLineEdit;
    QPushButton *addButton;
    QPushButton *cancelButton;
    QLabel *label;

    void setupUi(QWidget *AddTeacherWidget)
    {
        if (AddTeacherWidget->objectName().isEmpty())
            AddTeacherWidget->setObjectName(QString::fromUtf8("AddTeacherWidget"));
        AddTeacherWidget->resize(670, 344);
        returnButton = new QPushButton(AddTeacherWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(510, 40, 80, 41));
        idLabel = new QLabel(AddTeacherWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(100, 60, 54, 31));
        nameLabel = new QLabel(AddTeacherWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(100, 90, 54, 31));
        mathLabel = new QLabel(AddTeacherWidget);
        mathLabel->setObjectName(QString::fromUtf8("mathLabel"));
        mathLabel->setGeometry(QRect(80, 120, 81, 41));
        enLabel = new QLabel(AddTeacherWidget);
        enLabel->setObjectName(QString::fromUtf8("enLabel"));
        enLabel->setGeometry(QRect(80, 160, 71, 41));
        cLabel = new QLabel(AddTeacherWidget);
        cLabel->setObjectName(QString::fromUtf8("cLabel"));
        cLabel->setGeometry(QRect(90, 200, 81, 31));
        idLineEdit = new QLineEdit(AddTeacherWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(182, 60, 211, 20));
        nameLineEdit = new QLineEdit(AddTeacherWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(182, 100, 211, 20));
        mathLineEdit = new QLineEdit(AddTeacherWidget);
        mathLineEdit->setObjectName(QString::fromUtf8("mathLineEdit"));
        mathLineEdit->setGeometry(QRect(182, 130, 211, 20));
        enLineEdit = new QLineEdit(AddTeacherWidget);
        enLineEdit->setObjectName(QString::fromUtf8("enLineEdit"));
        enLineEdit->setGeometry(QRect(182, 170, 211, 20));
        cLineEdit = new QLineEdit(AddTeacherWidget);
        cLineEdit->setObjectName(QString::fromUtf8("cLineEdit"));
        cLineEdit->setGeometry(QRect(182, 210, 211, 20));
        addButton = new QPushButton(AddTeacherWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(160, 270, 80, 41));
        cancelButton = new QPushButton(AddTeacherWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(320, 270, 80, 41));
        label = new QLabel(AddTeacherWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 260, 211, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        label->setFont(font);

        retranslateUi(AddTeacherWidget);

        QMetaObject::connectSlotsByName(AddTeacherWidget);
    } // setupUi

    void retranslateUi(QWidget *AddTeacherWidget)
    {
        AddTeacherWidget->setWindowTitle(QCoreApplication::translate("AddTeacherWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("AddTeacherWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        idLabel->setText(QCoreApplication::translate("AddTeacherWidget", "\345\255\246\345\217\267\357\274\232", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddTeacherWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        mathLabel->setText(QCoreApplication::translate("AddTeacherWidget", "\346\225\260\345\255\246\345\210\206\346\236\220\357\274\232", nullptr));
        enLabel->setText(QCoreApplication::translate("AddTeacherWidget", "\345\233\233\347\272\247\350\213\261\350\257\255\357\274\232", nullptr));
        cLabel->setText(QCoreApplication::translate("AddTeacherWidget", "C++\357\274\232", nullptr));
        idLineEdit->setPlaceholderText(QCoreApplication::translate("AddTeacherWidget", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("AddTeacherWidget", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        mathLineEdit->setPlaceholderText(QCoreApplication::translate("AddTeacherWidget", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        enLineEdit->setPlaceholderText(QCoreApplication::translate("AddTeacherWidget", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        cLineEdit->setPlaceholderText(QCoreApplication::translate("AddTeacherWidget", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        addButton->setText(QCoreApplication::translate("AddTeacherWidget", "\346\267\273\345\212\240", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddTeacherWidget", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("AddTeacherWidget", "<html><head/><body><p align=\"center\">PS\357\274\232\345\210\240\351\231\244\345\217\252\351\234\200\350\276\223\345\205\245\345\255\246\345\217\267</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTeacherWidget: public Ui_AddTeacherWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTEACHERWIDGET_H
