#include "cb.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CB w;

    w.show();
    return QApplication::exec();
}
