#include "chessBoardWidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChessBoardWidget w;
    w.show();
    return a.exec();
}
