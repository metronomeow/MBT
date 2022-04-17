#pragma once
#include"Widget.h"
#include<QtGui>
#include<QWidget>
#include <QDockWidget>
#include<QPushButton>
#include<vector>

class Plots : public QDockWidget {
private:
    QWidget* PaintWgt = new QWidget;
    std::vector<double> Points;
    bool LoadFromFile(char* argv);
    QPushButton* btn_ChooseFile = new QPushButton("File", this);

protected:
    void paintEvent(QPaintEvent* event);

public:
    Plots();
private slots:
    void on_btnChooseFile();
};

