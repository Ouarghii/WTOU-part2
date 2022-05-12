#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include "dialog1.h"
#include <QLabel>
#include <QString>
Dialog::Dialog(QWidget *parent,int s) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/R.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);



}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_answer1_clicked()
{
        QMessageBox::information(this,"answer","wrong answer");
        dia = new Dialog1(this);
        hide();
        dia ->show();


}


void Dialog::on_answer2_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    dia = new Dialog1(this);
    hide();
    dia ->show();

}


void Dialog::on_answer3_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    dia = new Dialog1(this);
    hide();
    dia ->show();
}



void Dialog::on_answer4_clicked()
{
    QMessageBox::information(this,"answer","correct answer!");
    s11=25;
    dia = new Dialog1(this,s11);
     hide();
    dia ->show();




}





