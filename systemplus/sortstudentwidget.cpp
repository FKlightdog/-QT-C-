#include "sortstudentwidget.h"
#include "ui_sortstudentwidget.h"

SortStudentWidget::SortStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SortStudentWidget)
{
    ui->setupUi(this);
    sortButtonGroup=new QButtonGroup();
    sortButtonGroup->addButton(ui->mathRadioButton,0);
    sortButtonGroup->addButton(ui->enRadioButton,1);
    sortButtonGroup->addButton(ui->cRadioButton,2);
    sortButtonGroup->addButton(ui->avgRadioButton,3);
    ui->avgRadioButton->setChecked(true);
    ui->tableWidget->setColumnCount(6);
    QStringList headerLabels;
    headerLabels<<tr("学号")<<tr("姓名")<<tr("数学分析")<<tr("英语四级")<<tr("C++")<<tr("平均");
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setRowCount(1);
    connect(ui->returnButton,&QPushButton::clicked,[=]
    {
        emit back();
    });
}

SortStudentWidget::~SortStudentWidget()
{
    delete ui;
}
bool getstudentinfo(QVector<StudentInfo> &allStudentInfo)
{
    QFile file("student.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream inp(&file);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "反馈", "数据文件打开失败");
        return false;
    }

    while(!inp.atEnd())
    {
        QString id,name;
        int math,english,languagec;
        inp>>id>>name>>math>>english>>languagec;
        allStudentInfo.push_back(StudentInfo(id,name,math,english,languagec));
    }
    allStudentInfo.pop_back();
    file.close();
    return true;
}
bool comp_math(StudentInfo a,StudentInfo b)
{
    return a.get_math()>b.get_math();
}
bool comp_english(StudentInfo a,StudentInfo b)
{
    return a.get_english()>b.get_english();
}
bool comp_languagec(StudentInfo a,StudentInfo b)
{
    return a.get_languagec()>b.get_languagec();
}
bool comp_avg(StudentInfo a,StudentInfo b)
{
    return a.get_avg()>b.get_avg();
}
void SortStudentWidget::on_sortButton_clicked()
{
    ui->tableWidget->clearContents();//清理除了表头以外的其他数据
    int sortTag=sortButtonGroup->checkedId();
    QVector<StudentInfo>allStudentInfo;
    if(!getstudentinfo(allStudentInfo))
        return;
    if(allStudentInfo.empty())
    {
        QMessageBox::about(NULL,"反馈","学生信息为空");
        return;
    }
    switch(sortTag)
    {
    case 0:
        std::sort(allStudentInfo.begin(),allStudentInfo.end(),comp_math);
        break;
    case 1:
        std::sort(allStudentInfo.begin(),allStudentInfo.end(),comp_english);
        break;
    case 2:
        std::sort(allStudentInfo.begin(),allStudentInfo.end(),comp_languagec);
        break;
    case 3:
        std::sort(allStudentInfo.begin(),allStudentInfo.end(),comp_avg);
        break;
    }
    ui->tableWidget->setRowCount(allStudentInfo.size());
    for(long long  i=0;i<allStudentInfo.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(allStudentInfo[i].get_id()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(allStudentInfo[i].get_name()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(allStudentInfo[i].get_math())));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(allStudentInfo[i].get_english())));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(allStudentInfo[i].get_languagec())));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(allStudentInfo[i].get_avg())));
    }
}
