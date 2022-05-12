#ifndef WORLDLISTWIDGET_H
#define WORLDLISTWIDGET_H


#include <QWidget>
#include <QLabel>

class WorldListWidget : public QWidget {
    Q_OBJECT
public:
    explicit WorldListWidget(QWidget* parent, QString label = "");
    void addScore();

signals:

public slots:

private:
    QString label;
    QLabel* scoreLabel = nullptr;
protected:
  int score=0;
};

#endif  // WORDLISTWIDGET_H
