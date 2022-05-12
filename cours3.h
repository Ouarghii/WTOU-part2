#ifndef COURS3_H
#define COURS3_H

#include <QDialog>

namespace Ui {
class cours3;
}

class cours3 : public QDialog
{
    Q_OBJECT

public:
    explicit cours3(QWidget *parent = nullptr);
    ~cours3();

private:
    Ui::cours3 *ui;
};

#endif // COURS3_H
