#ifndef MainWindow3_H
#define MainWindow3_H

#include <QDialog>
#include <vector>
#include <QTimer>
#include "dialog8.h"
#include <QMainWindow>

using namespace std;
namespace Ui {
class MainWindow3;
}
//Cabeceras de las funciones propias
/////////////////////////////////////////////////////////
int randint();
void mergeM(vector<vector<int>> &buttNum);
void findElement(vector<vector<int>> &vvi,int elm,int *i,int *j);
void moveB(vector<vector<int>> &_buttPos, int p);
////////////////////////////////////////////////////////

//
class MainWindow3 : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow3(QWidget *parent = 0);
    ~MainWindow3();

    vector<vector<int>> buttonPos;//declaracion de la matriz de posiciones
    int imagS,imagMAX,t;
    void setpos(vector<vector<int>> posF);//declaracion de los metodos propios de la clase ventana
    void setimag(int numI);
    void check(vector<vector<int>> &_buttonPos);

public slots:

    void tfunct();

private slots:
    void on_p1_clicked();

    void on_p2_clicked();

    void on_p3_clicked();

    void on_p4_clicked();

    void on_p5_clicked();

    void on_p6_clicked();

    void on_p7_clicked();

    void on_p8_clicked();

    void on_flechaD_clicked();

    void on_flechaI_clicked();

    void on_start_clicked();

    void on_fin_partida_clicked();

private:
    Ui::MainWindow3 *ui;

    QTimer *timer;
    MainWindow3 *dia1;
    Dialog8 *dia2;

};

#endif // MainWindow_H
