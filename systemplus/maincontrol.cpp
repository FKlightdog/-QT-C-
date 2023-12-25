#include "maincontrol.h"
#include "ui_maincontrol.h"

MainControl::MainControl(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainControl)
{
    ui->setupUi(this);
}

MainControl::~MainControl()
{
    delete ui;
}

