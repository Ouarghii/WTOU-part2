#ifndef DIALOG7_H
#define DIALOG7_H
#include"dialog8.h"
#include <QDialog>
#include "mainwindow4.h"
namespace Ui {
class Dialog7;
}

class Dialog7 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog7(QWidget *parent = nullptr,int s=0);
    ~Dialog7();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog7 *ui;
    Dialog8 *dia;
   MainWindow4 *dia1;
    QLabel* scoreLabel = nullptr;
    int s18=0;
};

#endif // DIALOG7_H
