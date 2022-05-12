#ifndef DIALOG12_H
#define DIALOG12_H
#include "dialog13.h"

#include <QDialog>

namespace Ui {
class Dialog12;
}

class Dialog12 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog12(QWidget *parent = nullptr,int s=0);
    ~Dialog12();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog12 *ui;
    Dialog13 *dia;
    QLabel* scoreLabel = nullptr;
    int s23=0;
};

#endif // DIALOG12_H
