#include "addstudentwidget.h"
#include "ui_addstudentwidget.h"

AddStudentWidget::AddStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStudentWidget)
{
    ui->setupUi(this);
    connect(ui->returnButton,&QPushButton::clicked,[=]
    {
        emit back();
    });
    ui->idLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
    ui->passwordLineEdit->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
}

AddStudentWidget::~AddStudentWidget()
{
    delete ui;
}

void AddStudentWidget::on_addButton_clicked()
{
    QString id=ui->idLineEdit->text();
    QString password=ui->passwordLineEdit->text();
    QString name=ui->nameLineEdit->text();
    QString colledge=ui->colledgeLineEdit->text();
    if(ui->idLineEdit->text()==""||ui->passwordLineEdit->text()==""||ui->nameLineEdit->text()==""||ui->colledgeLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"警告","输入不能为空");
        return;
    }
    QFile file("teacher.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"反馈","文件打开失败");
        return;
    }
    QTextStream out(&file);
    out<<id<<" "<<password<<" "<<name<<" "<<colledge<<endl;
    file.close();
    QMessageBox::about(NULL,"反馈","添加成功");
    ui->idLineEdit->clear();
    ui->passwordLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->colledgeLineEdit->clear();
}

void AddStudentWidget::on_cancelButton_clicked()
{
    QVector<TeacherInfo>allTeacherInfo;
    if(ui->idLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"警告","id不得为空");
        return;
    }
    QFile file("teacher.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL,"反馈","文件打开失败");
        return;
    }
    QTextStream inp(&file);
    while(!inp.atEnd())
    {
        QString id,password,name,colledge;
        inp>>id>>password>>name>>colledge;
        allTeacherInfo.push_back(TeacherInfo(id,password,name,colledge));
    }
    allTeacherInfo.pop_back();
    file.close();
    bool flag=false;
    QString id=ui->idLineEdit->text();
    for(QVector<TeacherInfo>::Iterator it=allTeacherInfo.begin();it!=allTeacherInfo.end();it++)
    {
        if(it->get_id()==id)
        {
            allTeacherInfo.erase(it);
            flag=true;
            break;
        }
    }
    if(flag)
    {
        QMessageBox::about(NULL,"反馈","删除成功");
        QFile file("teacher.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        if(!file.isOpen())
        {
            QMessageBox::about(NULL,"反馈","文件打开失败");
            return;
        }
        QTextStream out(&file);
        for(auto t:allTeacherInfo)
        {
            out<<t.get_id()<<" "<<t.get_password()<<" "<<t.get_name()<<" "<<t.get_colledge()<<endl;
        }
        file.close();
    }
    else
    {
        QMessageBox::about(NULL,"反馈","无此工号教师");
    }
    ui->idLineEdit->clear();

}
