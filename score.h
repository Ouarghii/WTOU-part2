#ifndef SCORE_H
#define SCORE_H
#include<QGraphicsTextItem>


class score : public QGraphicsTextItem
{ int s;
public:
    score(QGraphicsItem *parent=0);
    void increase();
    int getscore();

};

#endif // SCORE_H
