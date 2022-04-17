#pragma once
#include <QMainWindow>
#include<QPushButton>
#include<QMenu>
#include<QMenuBar>
#include<QToolBar>
#include<QAction>
#include<QtGui>

class Widget : public QMainWindow{
   // Q_OBJECT;
public:
    Widget();
private:
    QAction* actCom_Port;
    QAction* actParam;
    QAction* actOutputs;
    QAction* actPlots;

   /* QPushButton* btnConnect = new QPushButton("Com_Ports", this);
    QPushButton* btnParam = new QPushButton("Parametric", this);
    QPushButton* btnPlot = new QPushButton("Plots", this);
    QPushButton* btnOutput = new QPushButton("Outputs", this);*/
private slots:
    void on_actCom_Ports();
    void on_actParam();
    void on_actOutputs();
    void on_actPlots();

};

