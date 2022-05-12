#ifndef DIALOG11_H
#define DIALOG11_H

#include <QDialog>
#include "dialog12.h"
#include <QLabel>


namespace Ui {
class Dialog11;
}

class Dialog11 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog11(QWidget *parent = nullptr,int s=0);
    ~Dialog11();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog11 *ui;
    Dialog12 *dia;
    QLabel* scoreLabel = nullptr;

    int s22=0;
};

#endif // DIALOG11_H
