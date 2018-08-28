#ifndef BUTTON_H
#define BUTTON_H

#include <QQuickWidget>

class Button : public QQuickWidget
{
    Q_OBJECT
public:
    Button();

signals:
    void clicked();

private slots:
    void onClicked();
};

#endif // BUTTON_H
