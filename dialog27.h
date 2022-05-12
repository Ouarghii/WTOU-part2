#ifndef DIALOG27_H
#define DIALOG27_H
#include "dialog28.h"
#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog27;
}

class Dialog27 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog27(QWidget *parent = nullptr,int s=0);
    ~Dialog27();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog27 *ui;
    Dialog28 *dia;
    QLabel* scoreLabel = nullptr;
    int s38=0;
};

#endif // DIALOG27_H
