#ifndef DIALOG6_H
#define DIALOG6_H
#include"dialog7.h"
#include <QDialog>
#include "score.h"
#include <QLabel>
namespace Ui {
class Dialog6;
}

class Dialog6 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog6(QWidget *parent = nullptr,int s=0);
    ~Dialog6();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog6 *ui;
    Dialog7 *dia;
    QLabel* scoreLabel = nullptr;
    int s17=0;
};

#endif // DIALOG6_H
