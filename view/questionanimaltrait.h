#ifndef QUESTIONANIMALTRAIT_H
#define QUESTIONANIMALTRAIT_H

#include <QDialog>

namespace Ui
{
    class QuestionAnimalTrait;
}

class QuestionAnimalTrait : public QDialog
{
    Q_OBJECT

public:

    explicit QuestionAnimalTrait(QString animalA, QString animalB, QWidget *parent = 0);

    ~QuestionAnimalTrait();

    QString getAnimalTrait();

private:

    Ui::QuestionAnimalTrait *ui;

private slots:

    void clickOK();
};

#endif // QUESTIONANIMALTRAIT_H
