#include "loginingwidget.h"
#include "ui_loginingwidget.h"
LoginingWidget::LoginingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginingWidget)
{
    ui->setupUi(this);
    ui->idLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));//id输入只能是数字
    ui->passwordLineEdit->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));//密码只能是字母

}

LoginingWidget::~LoginingWidget()
{
    delete ui;
}



void LoginingWidget::on_admPushButton_clicked()
{
    if(ui->idLineEdit->text()==""||ui->passwordLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"反馈","输入不能为空");
        return;
    }
    if(ui->idLineEdit->text()=="12345"&&ui->passwordLineEdit->text()=="12345")
    {
        QMessageBox::about(NULL,"反馈","登录成功");
    }
    else
    {
        QMessageBox::about(NULL,"提示","右下角有账号密码");
        ui->idLineEdit->clear();
        ui->passwordLineEdit->clear();
        return;
    }
    addmenuwidget=new AdmMenuWidget;
    this->hide();
    addmenuwidget->show();
}

void LoginingWidget::on_teacherPushButton_clicked()
{
    if(ui->idLineEdit->text()==""||ui->passwordLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"反馈","输入不能为空");
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
    QVector<TeacherInfo>allTeacherInfo;
    while(!inp.atEnd())
    {
        QString id,password,name,colledge;
        inp>>id>>password>>name>>colledge;
        allTeacherInfo.push_back(TeacherInfo(id,password,name,colledge));
    }
    allTeacherInfo.pop_back();
    file.close();
    QString id=ui->idLineEdit->text();
    QString password=ui->passwordLineEdit->text();
    bool flag=false;
    for(auto t:allTeacherInfo)
    {
        if(t.get_id()==id&&t.get_password()==password)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        QMessageBox::about(NULL,"反馈","登录成功");
        teachermenuwidget=new teacherMenuWidget;
        this->hide();
        teachermenuwidget->show();
    }
    else
    {
        QMessageBox::about(NULL,"反馈","账号或密码错误");
        ui->idLineEdit->clear();
        ui->passwordLineEdit->clear();
    }

}

void LoginingWidget::on_tipButton_clicked()
{
   QMessageBox box;
   box.setText("管理员账号和密码都是12345（懒得搞管理员文件了）");
   box.exec();
}

void LoginingWidget::on_pushButton_clicked()
{
    QMessageBox box;
    box.setText("新手制作，请多多包含(QAQ)");
    box.exec();
    QMessageBox::about(NULL,"丁真吗？","你会包含的吧");
    QMessageBox::about(NULL,NULL,"丁真吗？");
    QMessageBox::about(NULL,NULL,"你一定会包含的!");
}
