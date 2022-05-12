#include "cour3.h"
#include "ui_cour3.h"
#include <QPixmap>
#include "cours4.h"
cour3::cour3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cour3)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pix("C:/Users/21697/Downloads/Projet final/capture6.png");
    ui->label->setPixmap(pix);
}

cour3::~cour3()
{
    delete ui;
}




