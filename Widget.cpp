#include "Widget.h"
#include<QPushButton>

Widget::Widget() {
    this->isFullScreen();
    this->setStyleSheet("background-color:blue;");
    this->resize(1500, 1000);
    this->setWindowTitle("MBT SCAN");
    btnConnect->setGeometry(0,10,100,50);
    btnConnect->setStyleSheet("background-color:white;");
    btnParam->setGeometry(100, 10, 100, 50);
    btnParam->setStyleSheet("background-color:white;");
    btnPlot->setGeometry(200, 10, 100, 50);
    btnPlot->setStyleSheet("background-color:white;");
    btnOutput->setGeometry(300, 10, 100, 50);
    btnOutput->setStyleSheet("background-color:white;");
    connect(btnConnect, SIGNAL(released()), this, SLOT(handleButton()));

}
void Widget::handleButton() {
    
}