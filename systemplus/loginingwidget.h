#ifndef LOGININGWIDGET_H
#define LOGININGWIDGET_H
#include"admmenuwidget.h"
#include"teachermenuwidget.h"
#include <QWidget>
#include<QMessageBox>
#include<QPushButton>
#include<QVector>
#include<QFile>
#include<QDebug>
#include<QRegExp>
#include<QRegExpValidator>
#include"teacherinfo.h"
namespace Ui {
class LoginingWidget;
}

class LoginingWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginingWidget(QWidget *parent = nullptr);
    ~LoginingWidget();
    AdmMenuWidget *addmenuwidget;
    teacherMenuWidget *teachermenuwidget;
private slots:
    void on_admPushButton_clicked();

    void on_teacherPushButton_clicked();

    void on_tipButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::LoginingWidget *ui;
};

#endif // LOGININGWIDGET_H
