#include "score.h"
#include<QFont>


score::score(QGraphicsItem *parent):QGraphicsTextItem(parent) // position de la resultat
{
    s=0   ;
    setPlainText(QString("SCORE:") + QString::number(s));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",18));

}

void score::increase()
{ s++;
  setPlainText(QString("Score: ") + QString::number(s));}

int score::getscore(){return s;}
