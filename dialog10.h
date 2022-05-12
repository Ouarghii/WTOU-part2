#ifndef DIALOG10_H
#define DIALOG10_H

#include <QDialog>
#include "dialog11.h"
#include <QLabel>

namespace Ui {
class Dialog10;
}

class Dialog10 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog10(QWidget *parent = nullptr,int s=0);
    ~Dialog10();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog10 *ui;
    Dialog11 *dia;
    QLabel* scoreLabel = nullptr;
    int s21=0;
};

#endif // DIALOG10_H
