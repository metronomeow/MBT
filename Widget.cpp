#include "Widget.h"
#include"Com_ports.h"
#include"Parametrics.h"
#include"Outputs.h"
#include"Plots.h"
#include<QPushButton>
#include<QDockWidget>
#include<QMessageBox>
#include<QPalette>

Widget::Widget() : QMainWindow(nullptr) {
    this->resize(1500, 1000);
    //this->setStyleSheet("background-color:blue;");
    QPalette Pal(palette());
    // устанавливаем цвет фона 
    Pal.setColor(QPalette::Window, QColor("#33ccff"));
    this->setAutoFillBackground(true);
    this->setPalette(Pal); 
    this->setWindowTitle("MBT SCAN");

    actCom_Port = new QAction( "&Com_Ports", this);
    actParam = new QAction( "&Parametrics", this);
    actOutputs = new QAction( "&Outputs", this);
    actPlots = new QAction( "Plots", this);

    QToolBar* toolbar = new QToolBar(this);
    connect(actCom_Port, &QAction::triggered, this, &Widget::on_actCom_Ports);
    connect(actParam, &QAction::triggered, this, &Widget::on_actParam);
    connect(actOutputs, &QAction::triggered, this, &Widget::on_actOutputs);
    connect(actPlots, &QAction::triggered, this, &Widget::on_actPlots);

    toolbar->setStyleSheet("background:white");
    toolbar->addAction(actCom_Port);
    toolbar->addSeparator();
    toolbar->addAction(actParam);
    toolbar->addSeparator();
    toolbar->addAction(actOutputs);
    toolbar->addSeparator();
    toolbar->addAction(actPlots);
    toolbar->addSeparator();
    toolbar->setMovable(false);
    addToolBar(Qt::TopToolBarArea, toolbar);

    /*btnConnect->setGeometry(0,10,100,50);
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
    connect(btnOutput, &QPushButton::clicked, this, &Widget::on_pushButton4_clicked);*/

    this->show();
}
void Widget::on_actCom_Ports() {
    static Com_ports* Win_Ports = new Com_ports;
    addDockWidget(Qt::TopDockWidgetArea, Win_Ports);
    
}
void Widget::on_actParam() {
    static Parametrics* Win_Param = new Parametrics;
    addDockWidget(Qt::TopDockWidgetArea, Win_Param);

}
void Widget::on_actOutputs() {
    static Outputs* Win_Out = new Outputs;
    addDockWidget(Qt::TopDockWidgetArea, Win_Out);

}
void Widget::on_actPlots() {
    static Plots* Win_Plots = new Plots;
    addDockWidget(Qt::TopDockWidgetArea, Win_Plots);
}
