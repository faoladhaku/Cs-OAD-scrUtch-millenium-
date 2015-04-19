#include "scrutch.h"
#include "ui_scrutch.h"

Scrutch::Scrutch(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::Scrutch)
{
  ui->setupUi(this);
}

Scrutch::~Scrutch()
{
  delete ui;
}
