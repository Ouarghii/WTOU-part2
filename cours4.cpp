#include "cours4.h"
#include "ui_cours4.h"
#include <QPixmap>

cours4::cours4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours4)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pix("C:/Users/21697/Downloads/Projet final/capture3.png");
    ui->label->setPixmap(pix);
}

cours4::~cours4()
{
    delete ui;
}

void cours4::on_pushButton_clicked()
{
    dia = new cours5(this);
     hide();
    dia ->show();
}

