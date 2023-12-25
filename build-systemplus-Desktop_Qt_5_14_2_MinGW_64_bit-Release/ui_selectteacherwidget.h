/********************************************************************************
** Form generated from reading UI file 'selectteacherwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTTEACHERWIDGET_H
#define UI_SELECTTEACHERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectTeacherWidget
{
public:
    QPushButton *returnButton;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QLabel *nameLabel;
    QLabel *showNameLabel;
    QLabel *colledge;
    QLabel *showColledgeLabel;
    QPushButton *selectButton;

    void setupUi(QWidget *SelectTeacherWidget)
    {
        if (SelectTeacherWidget->objectName().isEmpty())
            SelectTeacherWidget->setObjectName(QString::fromUtf8("SelectTeacherWidget"));
        SelectTeacherWidget->resize(672, 354);
        returnButton = new QPushButton(SelectTeacherWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(469, 50, 91, 41));
        idLabel = new QLabel(SelectTeacherWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(100, 50, 54, 51));
        idLineEdit = new QLineEdit(SelectTeacherWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(160, 70, 201, 20));
        nameLabel = new QLabel(SelectTeacherWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(100, 90, 54, 51));
        showNameLabel = new QLabel(SelectTeacherWidget);
        showNameLabel->setObjectName(QString::fromUtf8("showNameLabel"));
        showNameLabel->setGeometry(QRect(160, 110, 54, 12));
        colledge = new QLabel(SelectTeacherWidget);
        colledge->setObjectName(QString::fromUtf8("colledge"));
        colledge->setGeometry(QRect(80, 130, 71, 51));
        showColledgeLabel = new QLabel(SelectTeacherWidget);
        showColledgeLabel->setObjectName(QString::fromUtf8("showColledgeLabel"));
        showColledgeLabel->setGeometry(QRect(160, 150, 54, 12));
        selectButton = new QPushButton(SelectTeacherWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(210, 240, 101, 41));

        retranslateUi(SelectTeacherWidget);

        QMetaObject::connectSlotsByName(SelectTeacherWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectTeacherWidget)
    {
        SelectTeacherWidget->setWindowTitle(QCoreApplication::translate("SelectTeacherWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SelectTeacherWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        idLabel->setText(QCoreApplication::translate("SelectTeacherWidget", "\345\267\245\345\217\267\357\274\232", nullptr));
        idLineEdit->setPlaceholderText(QCoreApplication::translate("SelectTeacherWidget", "\350\257\267\350\276\223\345\205\245\345\267\245\345\217\267", nullptr));
        nameLabel->setText(QCoreApplication::translate("SelectTeacherWidget", "\345\247\223\345\220\215\357\274\232", nullptr));
        showNameLabel->setText(QCoreApplication::translate("SelectTeacherWidget", "NULL", nullptr));
        colledge->setText(QCoreApplication::translate("SelectTeacherWidget", "\346\211\200\345\244\204\345\255\246\351\231\242\357\274\232", nullptr));
        showColledgeLabel->setText(QCoreApplication::translate("SelectTeacherWidget", "NULL", nullptr));
        selectButton->setText(QCoreApplication::translate("SelectTeacherWidget", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectTeacherWidget: public Ui_SelectTeacherWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTTEACHERWIDGET_H
