#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include "dialog3.h"
#include "score.h"
#include <QLabel>
namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = nullptr,int s=0);
    ~Dialog2();
    score *Score;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog2 *ui;
    Dialog3 *dia;
    QString label;
    QLabel* scoreLabel = nullptr;
    int s13=0;

};

#endif // DIALOG2_H
