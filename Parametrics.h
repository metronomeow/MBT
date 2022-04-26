#pragma once
#include"Widget.h"
#include <QDockWidget>
#include<QTableWidget>
class Parametrics : public QDockWidget {
    QTableWidget *tableWgt = new QTableWidget(2,7,this);
    
public:
    Parametrics();
};

