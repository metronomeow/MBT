#include "Widget.h"
#include"Com_ports.h"
#include<QPushButton>
#include<qmessagebox.h>
Widget::Widget() {
    this->resize(1500, 1000);
    //this->isFullScreen();
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
    Com = true;
   static Com_ports port;
    port.show();
}
void Widget::on_pushButton2_clicked() {
    Par = true;
}
void Widget::on_pushButton3_clicked() {
    Plo = true;
}
void Widget::on_pushButton4_clicked() {
    Out = true;
}