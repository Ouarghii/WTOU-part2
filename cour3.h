#ifndef COUR3_H
#define COUR3_H

#include <QDialog>
#include "cours4.h"

namespace Ui {
class cour3;
}

class cour3 : public QDialog
{
    Q_OBJECT

public:
    explicit cour3(QWidget *parent = nullptr);
    ~cour3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cour3 *ui;
    cours4 *dia;
};

#endif // COUR3_H
