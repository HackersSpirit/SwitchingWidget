#ifndef WIDGET2_H
#define WIDGET2_H

#include <QWidget>

namespace Ui {
class Widget2;
}

class Widget2 : public QWidget
{
    Q_OBJECT

public:
    explicit Widget2(QWidget *parent = 0);
    ~Widget2();

private:
    Ui::Widget2 *ui;
};

#endif // WIDGET2_H
