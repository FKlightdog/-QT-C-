#include "modifystudentwidget.h"
#include "ui_modifystudentwidget.h"

ModifyStudentWidget::ModifyStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyStudentWidget)
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

ModifyStudentWidget::~ModifyStudentWidget()
{
    delete ui;
}

void ModifyStudentWidget::on_modifyButton_clicked()
{
    if(ui->idLineEdit->text()==""||ui->nameLineEdit->text()==""||ui->mathLineEdit->text()==""||ui->enLineEdit->text()==""||ui->cLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"警告","输入均不得为空");
        return;
    }
    QVector<StudentInfo>allStudentInfo;
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
    QString name=ui->nameLineEdit->text();
    int math=ui->mathLineEdit->text().toInt();
    int english=ui->enLineEdit->text().toInt();
    int languagec=ui->cLineEdit->text().toInt();
    bool flag=false;
    for(QVector<StudentInfo>::iterator it=allStudentInfo.begin();it!=allStudentInfo.end();it++)
    {
        if(it->get_id()==id)
        {
            it->set_name(name);
            it->set_math(math);
            it->set_english(english);
            it->set_languagec(languagec);
            flag=true;
            break;
        }
    }
    if(flag)
    {
        QMessageBox::about(NULL,"反馈","修改成功");
        QFile file("student.txt");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        if(!file.isOpen())
        {
            QMessageBox::about(NULL,"反馈","打开失败");
            return;
        }
        QTextStream out(&file);
        for(auto t:allStudentInfo)
        {
            out<<t.get_id()<<" "<<t.get_name()<<" "<<t.get_math()<<" "<<t.get_english()<<" "<<t.get_languagec()<<endl;
        }
        file.close();
    }
    else
    {
        QMessageBox::about(NULL,"反馈","学号不存在");
    }
    ui->idLineEdit->clear();
    ui->nameLineEdit->clear();
    ui->mathLineEdit->clear();
    ui->enLineEdit->clear();
    ui->cLineEdit->clear();

}
