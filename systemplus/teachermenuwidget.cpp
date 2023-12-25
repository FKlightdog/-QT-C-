#include "teachermenuwidget.h"
#include "ui_teachermenuwidget.h"

teacherMenuWidget::teacherMenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::teacherMenuWidget)
{
    ui->setupUi(this);
    addteacherwidget =new AddTeacherWidget; //此处是学生，文件当初命名反了
    modifystudentwidget =new ModifyStudentWidget;
    selectstudentwidget=new SelectStudentWidget;
    sortstudentwidget =new SortStudentWidget;
    connect(ui->addButton,&QPushButton::clicked,[=]
    {
        this->hide();
        this->addteacherwidget->show();
    });
    connect(this->addteacherwidget,&AddTeacherWidget::back,[=]
    {
        this->addteacherwidget->hide();
        this->show();
    });
    connect(ui->modifyButton,&QPushButton::clicked,[=]
    {
        this->hide();
        this->modifystudentwidget->show();
    });
    connect(this->modifystudentwidget,&ModifyStudentWidget::back,[=]
    {
       this->modifystudentwidget->hide();
       this->show();
    });
    connect(ui->selectButton,&QPushButton::clicked,[=]
    {
        this->hide();
        this->selectstudentwidget->show();
    });
    connect(this->selectstudentwidget,&SelectStudentWidget::back,[=]
    {
        this->selectstudentwidget->hide();
        this->show();
    });
    connect(ui->sortButton,&QPushButton::clicked,[=]
    {
        this->hide();
        this->sortstudentwidget->show();
    });
    connect(this->sortstudentwidget,&SortStudentWidget::back,[=]
    {
        this->sortstudentwidget->hide();
        this->show();
    });

}

teacherMenuWidget::~teacherMenuWidget()
{
    delete ui;
}
