#ifndef DIALOG5_H
#define DIALOG5_H
#include"dialog6.h"
#include <QDialog>
#include "score.h"
namespace Ui {
class Dialog5;
}

class Dialog5 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog5(QWidget *parent = nullptr,int s=0);
    ~Dialog5();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog5 *ui;
    Dialog6 *dia;
    QLabel* scoreLabel = nullptr;
    int s16=0;
};

#endif // DIALOG5_H
