#ifndef COURS5_H
#define COURS5_H

#include <QDialog>
#include "cours6.h"

namespace Ui {
class cours5;
}

class cours5 : public QDialog
{
    Q_OBJECT

public:
    explicit cours5(QWidget *parent = nullptr);
    ~cours5();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::cours5 *ui;
    cours6 *dia;
};

#endif // COURS5_H
