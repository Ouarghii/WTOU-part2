#include "dialog1.h"
#include "ui_dialog1.h"
#include <QMessageBox>
#include "dialog2.h"
#include <QLabel>
#include <QString>
#include "score.h"
#include <QVBoxLayout>
Dialog1::Dialog1(QWidget *parent,int s) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/R.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
    QFont font2 = ui->label_2->font();
    ui->label_2->setFont(font2);
    ui->label_2->setStyleSheet("color:#FFFFFF;");
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
    s12=s;
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::on_pushButton_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");

    dia = new Dialog2(this,s12);
    hide();
    dia ->show();
}


void Dialog1::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"answer","correct answer");
    s12+=25;

    dia = new Dialog2(this,s12);
    hide();
    dia ->show();



}


void Dialog1::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    dia = new Dialog2(this,s12);
    hide();
    dia ->show();
}


void Dialog1::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    dia = new Dialog2(this,s12);
    hide();
    dia ->show();
}

