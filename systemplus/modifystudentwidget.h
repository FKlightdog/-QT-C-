#ifndef MODIFYSTUDENTWIDGET_H
#define MODIFYSTUDENTWIDGET_H

#include <QWidget>
#include"studentinfo.h"
#include<QVector>
#include<QFile>
#include<QMessageBox>
#include<QDebug>
#include<QRegExp>
#include<QRegExpValidator>
namespace Ui {
class ModifyStudentWidget;
}

class ModifyStudentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyStudentWidget(QWidget *parent = nullptr);
    ~ModifyStudentWidget();
signals:
    void back();
private slots:
    void on_modifyButton_clicked();

private:
    Ui::ModifyStudentWidget *ui;
};

#endif // MODIFYSTUDENTWIDGET_H
