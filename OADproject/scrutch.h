#ifndef SCRUTCH_H
#define SCRUTCH_H

#include <QMainWindow>

namespace Ui
{
  class Scrutch;
}

class Scrutch : public QMainWindow
{
  Q_OBJECT

public:
  explicit Scrutch(QWidget *parent = 0);

  ~Scrutch();

private:
  Ui::Scrutch *ui;
};

#endif // SCRUTCH_H
