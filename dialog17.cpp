#include "dialog17.h"
#include "ui_dialog17.h"
#include "dialog18.h"
#include <QMessageBox>
#include <QVBoxLayout>

Dialog17::Dialog17(QWidget *parent,int s) :
    QDialog(parent),
    ui(new Ui::Dialog17)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/S.jpg");
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
    s28=s;
}

Dialog17::~Dialog17()
{
    delete ui;
}

void Dialog17::on_pushButton_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");

    dia = new Dialog18(this,s28);
    hide();
    dia ->show();
}


void Dialog17::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");

    dia = new Dialog18(this,s28);
    hide();
    dia ->show();
}


void Dialog17::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"answer","correct answer");
    s28+=25;

    dia = new Dialog18(this,s28);
    hide();
    dia ->show();
}


void Dialog17::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");

    dia = new Dialog18(this,s28);
    hide();
    dia ->show();
}

