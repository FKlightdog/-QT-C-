#include "admmenuwidget.h"
#include "ui_admmenuwidget.h"

AdmMenuWidget::AdmMenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AdmMenuWidget)
{
    ui->setupUi(this);
    addstudentwidget=new AddStudentWidget;
    selectstudentwidget=new SelectStudentWidget;
    selectteacherwidget=new SelectTeacherWidget;
    addteacherwidget=new AddTeacherWidget;
    connect(ui->addButton,&QPushButton::clicked,[=]{
        this->hide();
        this->addstudentwidget->show();
    });
    connect(this->addstudentwidget,&AddStudentWidget::back,[=]
    {
        this->addstudentwidget->hide();
        this->show();
    });
    connect(ui->selectstudentButton,&QPushButton::clicked,[=]
    {
        this->hide();
        this->selectstudentwidget->show();
    });
    connect(this->selectstudentwidget,&SelectStudentWidget::back,[=]
    {
        this->selectstudentwidget->hide();
        this->show();
    });
    connect(ui->selectTeacherButton,&QPushButton::clicked,[=]
    {
        this->hide();
        this->selectteacherwidget->show();
    });
    connect(this->selectteacherwidget,&SelectTeacherWidget::back,[=]
    {
        this->selectteacherwidget->hide();
        this->show();
    });
    connect(ui->addButton1,&QPushButton::clicked,[=]
    {
        this->hide();
        this->addteacherwidget->show();
    });
    connect(this->addteacherwidget,&AddTeacherWidget::back,[=]
    {
        this->addteacherwidget->hide();
        this->show();
    });
}

AdmMenuWidget::~AdmMenuWidget()
{
    delete ui;
}

