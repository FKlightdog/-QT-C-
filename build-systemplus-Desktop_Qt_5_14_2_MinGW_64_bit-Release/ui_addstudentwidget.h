/********************************************************************************
** Form generated from reading UI file 'addstudentwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENTWIDGET_H
#define UI_ADDSTUDENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentWidget
{
public:
    QPushButton *returnButton;
    QLabel *idLabel;
    QLabel *passwordLabel;
    QLabel *nameLabel;
    QLabel *colledgeLabel;
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *colledgeLineEdit;
    QPushButton *cancelButton;
    QPushButton *addButton;

    void setupUi(QWidget *AddStudentWidget)
    {
        if (AddStudentWidget->objectName().isEmpty())
            AddStudentWidget->setObjectName(QString::fromUtf8("AddStudentWidget"));
        AddStudentWidget->resize(666, 350);
        returnButton = new QPushButton(AddStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(499, 30, 91, 41));
        idLabel = new QLabel(AddStudentWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(80, 70, 61, 31));
        passwordLabel = new QLabel(AddStudentWidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(80, 100, 71, 31));
        nameLabel = new QLabel(AddStudentWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(80, 130, 61, 31));
        colledgeLabel = new QLabel(AddStudentWidget);
        colledgeLabel->setObjectName(QString::fromUtf8("colledgeLabel"));
        colledgeLabel->setGeometry(QRect(79, 160, 71, 31));
        idLineEdit = new QLineEdit(AddStudentWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(182, 70, 221, 20));
        idLineEdit->setMaxLength(15);
        passwordLineEdit = new QLineEdit(AddStudentWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(182, 100, 221, 20));
        passwordLineEdit->setMaxLength(26);
        nameLineEdit = new QLineEdit(AddStudentWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(182, 130, 221, 20));
        nameLineEdit->setMaxLength(15);
        colledgeLineEdit = new QLineEdit(AddStudentWidget);
        colledgeLineEdit->setObjectName(QString::fromUtf8("colledgeLineEdit"));
        colledgeLineEdit->setGeometry(QRect(182, 160, 221, 20));
        colledgeLineEdit->setMaxLength(15);
        cancelButton = new QPushButton(AddStudentWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(330, 220, 91, 41));
        addButton = new QPushButton(AddStudentWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(150, 220, 91, 41));

        retranslateUi(AddStudentWidget);

        QMetaObject::connectSlotsByName(AddStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddStudentWidget)
    {
        AddStudentWidget->setWindowTitle(QCoreApplication::translate("AddStudentWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("AddStudentWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        idLabel->setText(QCoreApplication::translate("AddStudentWidget", "\345\267\245\345\217\267:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("AddStudentWidget", "\350\264\246\345\217\267\345\257\206\347\240\201\357\274\232", nullptr));
        nameLabel->setText(QCoreApplication::translate("AddStudentWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        colledgeLabel->setText(QCoreApplication::translate("AddStudentWidget", "\346\211\200\345\244\204\345\255\246\351\231\242\357\274\232", nullptr));
        idLineEdit->setPlaceholderText(QCoreApplication::translate("AddStudentWidget", "\350\257\267\350\276\223\345\205\245\345\267\245\345\217\267\357\274\232", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("AddStudentWidget", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("AddStudentWidget", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        colledgeLineEdit->setPlaceholderText(QCoreApplication::translate("AddStudentWidget", "\350\257\267\350\276\223\345\205\245\346\211\200\345\234\250\345\255\246\351\231\242\357\274\232", nullptr));
        cancelButton->setText(QCoreApplication::translate("AddStudentWidget", "\345\210\240\351\231\244", nullptr));
        addButton->setText(QCoreApplication::translate("AddStudentWidget", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentWidget: public Ui_AddStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENTWIDGET_H
