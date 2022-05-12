#include "worldlistwidget.h"
#include <QHBoxLayout>
#include <QTableView>

WorldListWidget::WorldListWidget(QWidget* parent, QString label)
    : QWidget(parent) {
    this->setStyleSheet("background-color:#9FB7B9;");

    QVBoxLayout* layout = new QVBoxLayout();
    QHBoxLayout* headLayout = new QHBoxLayout();

    QLabel* nameLabel = new QLabel(this);
    scoreLabel = new QLabel(this);
    QFont font = nameLabel->font();
    font.setPointSize(25);
    nameLabel->setFont(font);
    scoreLabel->setFont(font);
    nameLabel->setText(label);
    scoreLabel->setText(QString::number(score));

    headLayout->addWidget(nameLabel, 0, Qt::AlignmentFlag::AlignLeft);
    headLayout->addWidget(scoreLabel, 0, Qt::AlignmentFlag::AlignRight);
    layout->addLayout(headLayout);

    QFrame* hline = new QFrame();
    hline->setFrameShape(QFrame::HLine);
    hline->setFrameShadow(QFrame::Sunken);
    layout->addWidget(hline);


    setLayout(layout);
}

void WorldListWidget::addScore() {
    this->score += 25;
    scoreLabel->setText(QString::number(this->score));
}
