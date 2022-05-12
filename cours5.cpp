#include "cours5.h"
#include "ui_cours5.h"

cours5::cours5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours5)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pix("C:/Users/21697/Downloads/Projet final/capture4.png");
    ui->label->setPixmap(pix);
}

cours5::~cours5()
{
    delete ui;
}

void cours5::on_pushButton_2_clicked()
{
    dia = new cours6(this);
     hide();
    dia ->show();
}

