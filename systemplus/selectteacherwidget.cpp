#include "selectteacherwidget.h"
#include "ui_selectteacherwidget.h"

SelectTeacherWidget::SelectTeacherWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectTeacherWidget)
{
    ui->setupUi(this);
    connect(ui->returnButton,&QPushButton::clicked,[=]
    {
        emit back();
    });
    ui->idLineEdit->setValidator(new QRegExpValidator(QRegExp("[0-9]+$")));
}

SelectTeacherWidget::~SelectTeacherWidget()
{
    delete ui;
}

void SelectTeacherWidget::on_selectButton_clicked()
{
    if(ui->idLineEdit->text()=="")
    {
        QMessageBox::about(NULL,"警告","ID不得为空");
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
    bool flag=false;
    for(auto t:allTeacherInfo)
    {
        if(t.get_id()==id)
        {
            ui->showNameLabel->setText(t.get_name());
            ui->showColledgeLabel->setText(t.get_colledge());
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
        QMessageBox::about(NULL,"反馈","无此工号教师");
    }
    ui->idLineEdit->clear();
}
