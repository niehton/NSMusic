#include "NSMusicClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NSMusicClient w;
    w.show();
    return a.exec();
}
