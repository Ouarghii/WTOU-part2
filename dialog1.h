#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include "dialog2.h"
namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = nullptr,int s=0);
    ~Dialog1();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog1 *ui;
    Dialog2 *dia;
    QLabel* scoreLabel = nullptr;
public:
    int s12=0;

};

#endif // DIALOG1_H
