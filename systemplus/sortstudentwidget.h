#ifndef SORTSTUDENTWIDGET_H
#define SORTSTUDENTWIDGET_H

#include <QWidget>
#include"studentinfo.h"
#include<QVector>
#include<QFile>
#include<QDebug>
#include<QMessageBox>
#include<QButtonGroup>
namespace Ui {
class SortStudentWidget;
}

class SortStudentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SortStudentWidget(QWidget *parent = nullptr);
    ~SortStudentWidget();
signals:
    void back();
private slots:
    void on_sortButton_clicked();

private:
    Ui::SortStudentWidget *ui;
    QButtonGroup *sortButtonGroup;
};

#endif // SORTSTUDENTWIDGET_H
