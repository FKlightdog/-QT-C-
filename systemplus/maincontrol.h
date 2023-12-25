#ifndef MAINCONTROL_H
#define MAINCONTROL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainControl; }
QT_END_NAMESPACE

class MainControl : public QMainWindow
{
    Q_OBJECT

public:
    MainControl(QWidget *parent = nullptr);
    ~MainControl();

private:
    Ui::MainControl *ui;
};
#endif // MAINCONTROL_H
