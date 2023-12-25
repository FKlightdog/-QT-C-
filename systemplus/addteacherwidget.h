#ifndef ADDTEACHERWIDGET_H
#define ADDTEACHERWIDGET_H

#include <QWidget>
#include"studentinfo.h"
#include<QVector>
#include<QFile>
#include<QMessageBox>
#include<QDebug>
#include<QRegExp>
#include<QRegExpValidator>
namespace Ui {
class AddTeacherWidget;
}

class AddTeacherWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddTeacherWidget(QWidget *parent = nullptr);
    ~AddTeacherWidget();
signals:
    void back();
private slots:
    void on_addButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::AddTeacherWidget *ui;
};

#endif // ADDTEACHERWIDGET_H
