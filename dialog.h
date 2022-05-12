#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "dialog1.h"
#include <QLabel>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr,int s=0);
    ~Dialog();


private slots:


    void on_answer1_clicked();

    void on_answer2_clicked();

    void on_answer3_clicked();

    void on_answer4_clicked();



private:
    Ui::Dialog *ui;
    Dialog1 *dia;
    int s11=0;




};

#endif // DIALOG_H
