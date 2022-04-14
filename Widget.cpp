#include "Widget.h"
#include"Com_ports.h"
#include"Parametrics.h"
#include"Outputs.h"
#include"Plots.h"
#include<QPushButton>
#include<qmessagebox.h>

Widget::Widget() {
    this->resize(500, 500);
    if(this->isFullScreen()){};
    //this->setStyleSheet("background-color:blue;");
    this->setWindowTitle("MBT SCAN");
    btnConnect->setGeometry(0,10,100,50);
    btnConnect->setStyleSheet("background-color:white;");
    btnParam->setGeometry(100, 10, 100, 50);
    btnParam->setStyleSheet("background-color:white;");
    btnPlot->setGeometry(200, 10, 100, 50);
    btnPlot->setStyleSheet("background-color:white;");
    btnOutput->setGeometry(300, 10, 100, 50);
    btnOutput->setStyleSheet("background-color:white;");
    connect(btnConnect, &QPushButton::clicked, this, &Widget::on_pushButton1_clicked);
    connect(btnParam, &QPushButton::clicked, this, &Widget::on_pushButton2_clicked);
    connect(btnPlot, &QPushButton::clicked, this, &Widget::on_pushButton3_clicked);
    connect(btnOutput, &QPushButton::clicked, this, &Widget::on_pushButton4_clicked);

}
void Widget::on_pushButton1_clicked() {
    Com = true ? true : false;
    static Com_ports Win_Ports;
    Win_Ports.show();//(this);
    //if (Win_Ports.isVisible()) {
    //   // Win_Ports.hide();
    //    QMessageBox::about(this, "Da!!!", "Window in focus");
    //}
}
void Widget::on_pushButton2_clicked() {
    Par = true ? true : false;
    static Parametrics Win_Param;
    Win_Param.show();
}
void Widget::on_pushButton3_clicked() {
    Plo = true;
    static Plots Win_Plot;
    Win_Plot.show();

}
void Widget::on_pushButton4_clicked() {
    Out = true;
    static Outputs Win_Out;
    Win_Out.show();
}