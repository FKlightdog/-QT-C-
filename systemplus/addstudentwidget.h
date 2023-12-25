#ifndef ADDSTUDENTWIDGET_H
#define ADDSTUDENTWIDGET_H

#include <QWidget>
#include"teacherinfo.h"
#include<QMessageBox>
#include<QFile>
#include<QDebug>
#include<QVector>
#include<QRegExp>
#include<QRegExpValidator>
namespace Ui {
class AddStudentWidget;
}

class AddStudentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddStudentWidget(QWidget *parent = nullptr);
    ~AddStudentWidget();
signals:
    void back();
private slots:
    void on_addButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::AddStudentWidget *ui;
};

#endif // ADDSTUDENTWIDGET_H
