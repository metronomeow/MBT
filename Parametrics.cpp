#include "Parametrics.h"
#include<QLayout>
#include<QStringList>
#include<QRect>

Parametrics::Parametrics() {
    this->resize(1500, 1000);
    this->setWindowTitle("Parametrics");
    QTableWidgetItem* item = new QTableWidgetItem("Read",0);
    QRect rect(QPoint &atopleft, QSize &bottomright );

    tableWgt->setGeometry(50,50,1200,700);
    tableWgt->setWindowTitle("Read");
    tableWgt->setHorizontalHeaderLabels(QStringList() << "Adress" << "Values" << "Dit depth" << "Factor" << "Magnitude" << "<>" << "Name");
    //tableWgt->setItem(0, 0, item);
    tableWgt->setFixedHeight(700);
    tableWgt->setFixedWidth(1200);
    tableWgt->show();

}
