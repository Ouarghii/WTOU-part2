#ifndef DIALOG25_H
#define DIALOG25_H
#include <QLabel>

#include "dialog26.h"
#include <QDialog>

namespace Ui {
class Dialog25;
}

class Dialog25 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog25(QWidget *parent = nullptr,int s=0);
    ~Dialog25();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialog25 *ui;
    Dialog26 * dia;
    QLabel* scoreLabel = nullptr;
    int s36=0;
};

#endif // DIALOG25_H
