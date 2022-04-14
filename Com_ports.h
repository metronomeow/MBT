#pragma once
//#include"Widget.h"
#include <qwidget.h>
#include<string>
#include<QPushButton>
#include<QSerialPort>
class Com_ports : public QWidget {
    
    int Number=0;
    bool Parity=0;
    std::string Adress="Nothing here";
    
public:
    //Com_ports(Widget* wgt);
    Com_ports();
    
    //QPushButton* btnConnect = new QPushButton("Com_Ports", this);
};