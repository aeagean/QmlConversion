#include <QApplication>
#include "Button.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Button button;
    button.show();

    return app.exec();
}
