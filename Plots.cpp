#include "Plots.h"
#include<fstream>
OPENFILENAME ofn;

void Plots::paintEvent(QPaintEvent* event) {
        
        QPainter p(PaintWgt);
        /*QPen pen(QColor(0, 5, 100), 2, Qt::SolidLine);
        p.setPen(pen);

        p.drawLine(QPoint(100, 100), QPoint(1000, 1000));*/
        QPen pen(QColor(0, 5, 200), 1, Qt::SolidLine);

        if (!Points.empty()) {
            p.setPen(pen);

            p.drawRect(100, 100, 700, 700);
            for (int i = 0; i < Points.size()-1; i++) {
                p.drawLine(i, Points[i] * (100), i+1, Points[i + 1]*(100));
            }

        }
    
}
Plots::Plots() {
    this->resize(1500, 1000);
    this->setWindowTitle("Plots");
    PaintWgt->setGeometry(50, 50, 1200, 700);
    PaintWgt->show();
    connect(btn_ChooseFile, &QPushButton::clicked, this, &Plots::on_btnChooseFile);
    btn_ChooseFile->setGeometry(10, 10, 60, 60);

}

void Plots::on_btnChooseFile() {
    LoadFromFile(nullptr);
}

bool Plots::LoadFromFile(char* argv) {
    std::ifstream F;
    float data;
    std::string buff;
    Points.clear();
    if (argv == NULL) {
        wchar_t szFileName[MAX_PATH] = L"";
        ZeroMemory(&ofn, sizeof(ofn));
        ofn.lStructSize = sizeof(ofn);
        ofn.lpstrFilter = L"Text Files (*.txt)\0*.txt\0All Files (*.*)\0*.*\0";
        ofn.lpstrFile = szFileName;
        ofn.nMaxFile = MAX_PATH;
        ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
        ofn.lpstrDefExt = L"txt";
        GetOpenFileName(&ofn);


        F.open(ofn.lpstrFile, std::ios::in);
    }
    else {
        F.open(argv, std::ios::in);
    }
    if (F.is_open()) {
        F >> buff;
        F >> buff;
        while (!F.eof()) {
            F >> data;
            Points.push_back(data);
        }
    }
    else return false;
    F.close();
    return true;
}