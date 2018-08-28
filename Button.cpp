#include "Button.h"
#include <QDebug>
#include <QQuickItem>

Button::Button()
{
    QUrl source("qrc:/Button.qml");
    this->setResizeMode(QQuickWidget::SizeRootObjectToView);
    this->setSource(source);

    connect(this->rootObject(), SIGNAL(clicked()), this, SLOT(onClicked()));
}

void Button::onClicked()
{
    this->resize(100, 100);
    qDebug()<<"onClicked!!!";
}
