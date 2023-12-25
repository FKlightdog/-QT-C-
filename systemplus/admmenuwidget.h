#ifndef ADMMENUWIDGET_H
#define ADMMENUWIDGET_H

#include <QWidget>
#include"addstudentwidget.h"
#include"selectstudentwidget.h"
#include"selectteacherwidget.h"
#include"addteacherwidget.h"
#include<QPushButton>
namespace Ui {
class AdmMenuWidget;
}

class AdmMenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AdmMenuWidget(QWidget *parent = nullptr);
    ~AdmMenuWidget();
    AddStudentWidget *addstudentwidget;
    SelectStudentWidget *selectstudentwidget;
    SelectTeacherWidget *selectteacherwidget;
    AddTeacherWidget *addteacherwidget;
private slots:

private:
    Ui::AdmMenuWidget *ui;
};

#endif // ADMMENUWIDGET_H
