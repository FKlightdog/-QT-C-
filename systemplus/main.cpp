#include"loginingwidget.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginingWidget w;
    w.show();

    return a.exec();
}
