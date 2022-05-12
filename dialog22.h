#ifndef DIALOG22_H
#define DIALOG22_H
#include "dialog23.h"
#include <QMessageBox>

#include <QDialog>

namespace Ui {
class Dialog22;
}

class Dialog22 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog22(QWidget *parent = nullptr,int s=0);
    ~Dialog22();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog22 *ui;
    Dialog23 *dia;
    QLabel* scoreLabel = nullptr;
    int s33=0;
};

#endif // DIALOG22_H
