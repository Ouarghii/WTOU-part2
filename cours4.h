#ifndef COURS4_H
#define COURS4_H

#include <QDialog>
#include "cours5.h"

namespace Ui {
class cours4;
}

class cours4 : public QDialog
{
    Q_OBJECT

public:
    explicit cours4(QWidget *parent = nullptr);
    ~cours4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cours4 *ui;
    cours5 *dia;
};

#endif // COURS4_H
