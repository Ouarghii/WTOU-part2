#include "cours3.h"
#include "ui_cours3.h"

cours3::cours3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours3)
{
    ui->setupUi(this);
}

cours3::~cours3()
{
    delete ui;
}
