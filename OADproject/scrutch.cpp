#include "scrutch.h"
#include "ui_scrutch.h"

Scrutch::Scrutch(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::Scrutch)
{
  ui->setupUi(this);
  ui->label->setText("interfas grafica");
  ui->pushButton->setText("Cerrar");
  ui->pushButton_3->setText("Archivo");
  ui->pushButton_4->setText("Editar");
  ui->pushButton_5->setText("Compartir");
  ui->pushButton_6->setText("Ayuda");
  connect(ui->radioButton,SIGNAL(toggled(bool)),
          ui->radioButton,SLOT(setDisabled(bool)));
          
  connect(ui->radioButton,SIGNAL(toggled(bool)),
          ui->radioButton_2,SLOT(setDisabled(bool)));
  
  disconnect(ui->radioButton,SIGNAL(toggled(bool)),
          ui->radioButton,SLOT(setDisabled(bool)));
  
  connect(ui->pushButton_2,SIGNAL(clicked()),
          this,SLOT (conectar()));
}

Scrutch::~Scrutch()
{
  delete ui;
}
void Scrutch::conectar()
{
  if(ui->radioButton->isEnabled())
    {
      ui->radioButton->isEnabled(false);
    }
    else
    {
      ui->radioButton->setEnabled(true);
    }
}
