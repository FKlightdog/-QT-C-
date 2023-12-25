#ifndef TEACHERMENUWIDGET_H
#define TEACHERMENUWIDGET_H

#include <QWidget>
#include"addteacherwidget.h"
#include"modifystudentwidget.h"
#include"sortstudentwidget.h"
#include"selectstudentwidget.h"
namespace Ui {
class teacherMenuWidget;
}

class teacherMenuWidget : public QWidget
{
    Q_OBJECT
public:
    explicit teacherMenuWidget(QWidget *parent = nullptr);
    ~teacherMenuWidget();
    AddTeacherWidget *addteacherwidget;
    ModifyStudentWidget *modifystudentwidget;
    SortStudentWidget *sortstudentwidget;
    SelectStudentWidget *selectstudentwidget;
private:
    Ui::teacherMenuWidget *ui;
};

#endif // TEACHERMENUWIDGET_H
