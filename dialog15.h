#ifndef DIALOG15_H
#define DIALOG15_H

#include <QDialog>
#include "dialog16.h"
#include <QLabel>
namespace Ui {
class Dialog15;
}

class Dialog15 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog15(QWidget *parent = nullptr,int s=0);
    ~Dialog15();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog15 *ui;
    Dialog16 *dia;
    QLabel* scoreLabel = nullptr;
    int s26=0;
};

#endif // DIALOG15_H
