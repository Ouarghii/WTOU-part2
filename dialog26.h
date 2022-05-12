#ifndef DIALOG26_H
#define DIALOG26_H
#include "dialog27.h"
#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog26;
}

class Dialog26 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog26(QWidget *parent = nullptr,int s=0);
    ~Dialog26();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog26 *ui;
    Dialog27 *dia;
    QLabel* scoreLabel = nullptr;
    int s37=0;
};

#endif // DIALOG26_H
