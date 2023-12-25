#include "addteacherwidget.h"
#include "ui_addteacherwidget.h"

AddTeacherWidget::AddTeacherWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddTeacherWidget)
{
    ui->setupUi(this);
    connect(ui->returnButton,&QPushButton::clicked,[=]
    {
        emit back();
    });
    ui->idLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
    ui->mathLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
    ui->enLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
    ui->cLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
}

AddTeacherWidget::~AddTeacherWidget()
{
    delete ui;
}

void AddTeacherWidget::on_addButton_clicked()
{
    QString id=ui->idLineEdit->text();
    QString name=ui->nameLineEdit->text();
    int math=ui->mathLineEdit->text().toInt();
    int english=ui->enLineEdit->text().toInt();
    int languagec=ui->cLineEdit->text().toInt();
    if(ui->idLineEdit->text()==""||ui->nameLineEdit->text()==""||ui->mathLineEdit->text()==""||ui->enLineEdit->text()==""||ui->cLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"警告","输入不能为空");
        return;
    }
    QFile file("student.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"反馈","文件打开失败");
        return;
    }
    QTextStream out(&file);
    out<<id<<" "<<name<<" "<<math<<" "<<english<<" "<<languagec<<endl;
    file.close();
    QMessageBox::about(NULL,"反馈","添加成功");
    ui->idLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->mathLineEdit->clear();
    ui->enLineEdit->clear();
    ui->cLineEdit->clear();
}

void AddTeacherWidget::on_cancelButton_clicked()
{
    QVector<StudentInfo>allStudentInfo;
    if(ui->idLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"反馈","学号不得为空");
        return;
    }
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"反馈","打开文件失败");
        return;
    }
    QTextStream inp(&file);
    while(!inp.atEnd())
    {
        QString id,name;
        int math,english,languagec;
        inp>>id>>name>>math>>english>>languagec;
        allStudentInfo.push_back(StudentInfo(id,name,math,english,languagec));
    }
    allStudentInfo.pop_back();
    file.close();
    QString id=ui->idLineEdit->text();
    bool flag=false;
    for(QVector<StudentInfo>::iterator it=allStudentInfo.begin();it!=allStudentInfo.end();it++)
    {
        if(it->get_id()==id)
        {
            allStudentInfo.erase(it);
            flag=true;
            break;
        }
    }
    if(flag)
    {
        QMessageBox::about(NULL,"反馈","删除成功");
        QFile file("student.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text);
        if(!file.isOpen())
        {
            QMessageBox::about(NULL,"反馈","文件打开失败");
            return;
        }
        QTextStream out(&file);
        for(auto t:allStudentInfo)
        {
            out<<t.get_id()<<" "<<t.get_name()<<" "<<t.get_math()<<" "<<t.get_english()<<" "<<t.get_languagec()<<endl;
        }
    }
    else
    {
        QMessageBox::about(NULL,"反馈","学号不存在");
    }
    ui->idLineEdit->clear();
}
