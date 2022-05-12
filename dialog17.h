#ifndef DIALOG17_H
#define DIALOG17_H
#include "dialog18.h"
#include <QLabel>


#include <QDialog>

namespace Ui {
class Dialog17;
}

class Dialog17 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog17(QWidget *parent = nullptr,int s=0);
    ~Dialog17();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog17 *ui;
    Dialog18 *dia;
    QLabel* scoreLabel = nullptr;
    int s28=0;

};

#endif // DIALOG17_H
