#pragma once
#include"Widget.h"
#include<string>
#include<QPushButton>
class Com_ports : public Widget {

    int Number;
    bool Parity;
    std::string Adress;
    
public:
    Com_ports();
    
    //QPushButton* btnConnect = new QPushButton("Com_Ports", this);
};