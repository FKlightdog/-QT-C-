#include "selectstudentwidget.h"
#include "ui_selectstudentwidget.h"

SelectStudentWidget::SelectStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectStudentWidget)
{
    ui->setupUi(this);
    connect(ui->returnButton,&QPushButton::clicked,[=]
    {
        emit back();
    });
    ui->idLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
}

SelectStudentWidget::~SelectStudentWidget()
{
    delete ui;
}

void SelectStudentWidget::on_selectButton_clicked()
{
    if(ui->idLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"警告","学号不能为空");
        return;
    }
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"反馈","文件打开失败");
        return;
    }
    QTextStream inp(&file);
    QVector<StudentInfo>allstudentinfo;
    while(!inp.atEnd())
    {
        QString id,name;
        int math,english,languagec;
        inp>>id>>name>>math>>english>>languagec;
        allstudentinfo.push_back(StudentInfo(id,name,math,english,languagec));
    }
    allstudentinfo.pop_back();
    file.close();
    QString id=ui->idLineEdit->text();
    bool flag=false;
    for(auto t:allstudentinfo)
    {
        if(t.get_id()==id)
        {
            ui->showNameLabel->setText(t.get_name());
            ui->showMathLabel->setText(QString::number(t.get_math()));
            ui->showEnLabel->setText(QString::number(t.get_english()));
            ui->showCLabel->setText(QString::number(t.get_languagec()));
            flag=true;
            break;
        }
    }
    if(flag)
    {
        QMessageBox::about(NULL,"反馈","查询成功");
    }
    else
    {
        QMessageBox::about(NULL,"反馈","学号不存在");
    }
    ui->idLineEdit->clear();
}
