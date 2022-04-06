#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QSerialPort>
#include <QKeyEvent>
#include"MainWindow.h"

int main(int argc, char* argv[]) {
   
        QApplication app(argc, argv);

        Com_ports Port1;
        Port1.show();
        //QKeyEvent(QCloseEvent(), 27, , nullptr, false, 0);

    return app.exec();
}
