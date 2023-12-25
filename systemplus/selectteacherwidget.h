#ifndef SELECTTEACHERWIDGET_H
#define SELECTTEACHERWIDGET_H

#include <QWidget>
#include"teacherinfo.h"
#include<QVector>
#include<QMessageBox>
#include<QDebug>
#include<QFile>
#include<QRegExp>
#include<QRegExpValidator>
namespace Ui {
class SelectTeacherWidget;
}

class SelectTeacherWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SelectTeacherWidget(QWidget *parent = nullptr);
    ~SelectTeacherWidget();
signals:
    void back();
private slots:
    void on_selectButton_clicked();

private:
    Ui::SelectTeacherWidget *ui;
};

#endif // SELECTTEACHERWIDGET_H
