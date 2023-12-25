#ifndef SELECTSTUDENTWIDGET_H
#define SELECTSTUDENTWIDGET_H

#include <QWidget>
#include"studentinfo.h"
#include<QVector>
#include<QMessageBox>
#include<QFile>
#include<QDebug>
#include<QRegExp>
#include<QRegExpValidator>
namespace Ui {
class SelectStudentWidget;
}

class SelectStudentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectStudentWidget(QWidget *parent = nullptr);
    ~SelectStudentWidget();
signals:
    void back();
private slots:
    void on_selectButton_clicked();

private:
    Ui::SelectStudentWidget *ui;
};

#endif // SELECTSTUDENTWIDGET_H
