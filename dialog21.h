#ifndef DIALOG21_H
#define DIALOG21_H
#include "dialog22.h"
#include <QLabel>

#include <QDialog>

namespace Ui {
class Dialog21;
}

class Dialog21 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog21(QWidget *parent = nullptr,int s=0);
    ~Dialog21();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog21 *ui;
    Dialog22 *dia;
    QLabel* scoreLabel = nullptr;
    int s32=0;
};

#endif // DIALOG21_H
