#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSerialPort>  
#include"MainWindow.h"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
   // MainWindow mainwindow;
    QWidget wgt;
    wgt.resize(1500, 1000);
    wgt.setWindowTitle("MBT SCAN");

    QPushButton btn("Push me!", &wgt);

    wgt.show();

    return app.exec();
}
