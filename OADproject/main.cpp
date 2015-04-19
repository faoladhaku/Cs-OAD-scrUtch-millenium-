#include "scrutch.h"
#include <QApplication>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Scrutch w;
  w.show();

  return a.exec();
}
