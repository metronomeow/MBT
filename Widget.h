#pragma once
#include <qwidget.h>
#include<QPushButton>

class Widget : public QWidget{
public:
    Widget();
    QPushButton* btnConnect = new QPushButton("Com_Ports", this);
    QPushButton* btnParam = new QPushButton("Parametric", this);
    QPushButton* btnPlot = new QPushButton("Plots", this);
    QPushButton* btnOutput = new QPushButton("Outputs", this);
    void handleButton();
};

