#pragma once
#include <qwidget.h>
#include<QPushButton>

class Widget : public QWidget{
public:
    bool Com=false, Par=false, Plo=false, Out=false;
    Widget();
private:
    QPushButton* btnConnect = new QPushButton("Com_Ports", this);
    QPushButton* btnParam = new QPushButton("Parametric", this);
    QPushButton* btnPlot = new QPushButton("Plots", this);
    QPushButton* btnOutput = new QPushButton("Outputs", this);
private slots:
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();

};

