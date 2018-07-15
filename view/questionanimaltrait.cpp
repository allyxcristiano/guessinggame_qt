#include "questionanimaltrait.h"
#include "ui_questionanimaltrait.h"
#include <QMessageBox>

QuestionAnimalTrait::QuestionAnimalTrait(QString animalA, QString animalB, QWidget *parent) : QDialog(parent), ui(new Ui::QuestionAnimalTrait)
{
    ui->setupUi(this);

    QString titleQuestion = "A %1 __________ but a %2 does not (Fill it with an animal trait, like 'lives in water').";
    ui->lWhatAnimalTrait->setText(titleQuestion.arg(animalA).arg(animalB));

    connect(ui->leWhatAnimalTrait, SIGNAL(returnPressed()), this, SLOT(clickOK()));
    connect(ui->pbOK, SIGNAL(clicked(bool)), this, SLOT(clickOK()));
}

QuestionAnimalTrait::~QuestionAnimalTrait()
{
    delete ui;
}

QString QuestionAnimalTrait::getAnimalTrait()
{
    return ui->leWhatAnimalTrait->text();
}

void QuestionAnimalTrait::clickOK()
{
    this->accept();
}
