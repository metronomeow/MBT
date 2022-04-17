#include"Widget.h"
#include"Com_ports.h"
#include"Parametrics.h"
#include"Plots.h"
#include"Outputs.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSerialPort>
#include <QKeyEvent>
#include<QMessageBox>

int main(int argc, char* argv[]) {
   
        QApplication app(argc, argv);
        Widget My_window;

    return app.exec();
}
