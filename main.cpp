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
#include<qmessagebox.h>

int main(int argc, char* argv[]) {
   
        QApplication app(argc, argv);
        Widget My_window;
        Com_ports Port;
        My_window.show();
        
        /*
        Parametrics param;
        Port.show();
        param.show();*/
       // if (Port1.clicked());
       // QMessageBox::about(&Port1, "Com", "Yes");

        
      //  QPushButton hi;
       // connect(hi, SIGNAL(clicked()), Port1, SLOT(on_pushButton_clicked()));

        //Port1.on_pushButton_clicked();
        //QKeyEvent(QCloseEvent(), 27, , nullptr, false, 0);

    return app.exec();
}
