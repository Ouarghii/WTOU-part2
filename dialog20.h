#ifndef DIALOG20_H
#define DIALOG20_H
#include "dialog21.h"
#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog20;
}

class Dialog20 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog20(QWidget *parent = nullptr,int s=0);
    ~Dialog20();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog20 *ui;
    Dialog21 *dia;
    QLabel* scoreLabel = nullptr;
    int s31=0;
};

#endif // DIALOG20_H
