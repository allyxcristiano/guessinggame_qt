#include "questionanimal.h"
#include "ui_questionanimal.h"
#include <QMessageBox>

QuestionAnimal::QuestionAnimal(QWidget *parent) : QDialog(parent), ui(new Ui::QuestionAnimal)
{
    ui->setupUi(this);
    connect(ui->leWhatAnimal, SIGNAL(returnPressed()), this, SLOT(clickOK()));
    connect(ui->pbOK, SIGNAL(clicked(bool)), this, SLOT(clickOK()));
}

QString QuestionAnimal::getAnimal()
{
    return ui->leWhatAnimal->text();
}

QuestionAnimal::~QuestionAnimal()
{
    delete ui;
}

void QuestionAnimal::clickOK()
{
    this->accept();
}
