#ifndef DIALOG16_H
#define DIALOG16_H
#include "dialog17.h"
#include <QMessageBox>
#include <QLabel>

#include <QDialog>

namespace Ui {
class Dialog16;
}

class Dialog16 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog16(QWidget *parent = nullptr,int s=0);
    ~Dialog16();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog16 *ui;
    Dialog17 *dia;
    QLabel* scoreLabel = nullptr;
    int s27=0;
};

#endif // DIALOG16_H
