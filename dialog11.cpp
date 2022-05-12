#include "dialog11.h"
#include "ui_dialog11.h"
#include "dialog12.h"
#include <QMessageBox>
#include <QVBoxLayout>


Dialog11::Dialog11(QWidget *parent,int s) :
    QDialog(parent),
    ui(new Ui::Dialog11)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/V1.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
    QFont font2 = ui->label->font();
    ui->label->setFont(font2);
    ui->label->setStyleSheet("color:#FFFFFF;");
    QVBoxLayout* layout = new QVBoxLayout();
    QHBoxLayout* headLayout = new QHBoxLayout();
    QLabel* nameLabel = new QLabel(this);
    scoreLabel = new QLabel(this);
    QFont font = nameLabel->font();
    font.setPointSize(25);
    nameLabel->setFont(font);
    scoreLabel->setFont(font);
    nameLabel->setText("Score : ");
    scoreLabel->setText(QString::number(s));
    scoreLabel->setStyleSheet("color:#FFFFFF;");
    nameLabel->setStyleSheet("color:#FFFFFF;");
    headLayout->addWidget(nameLabel, 0, Qt::AlignmentFlag::AlignTop);
    headLayout->addWidget(scoreLabel, 0, Qt::AlignmentFlag::AlignTop);
    headLayout->addWidget(scoreLabel, 70, Qt::AlignmentFlag::AlignRight);
    layout->addLayout(headLayout);
    QFrame* hline = new QFrame();
    hline->setFrameShape(QFrame::HLine);
    hline->setFrameShadow(QFrame::Sunken);
    layout->addWidget(hline);
    setLayout(layout);
    s22=s;
}

Dialog11::~Dialog11()
{
    delete ui;
}


void Dialog11::on_pushButton_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");


    dia = new Dialog12(this,s22);
    hide();
    dia ->show();
}



void Dialog11::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");


    dia = new Dialog12(this,s22);
    hide();
    dia ->show();
}


void Dialog11::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");



    dia = new Dialog12(this,s22);
    hide();
    dia ->show();
}


void Dialog11::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"answer","correct answer");
    s22+=25;



    dia = new Dialog12(this,s22);
    hide();
    dia ->show();
}

