#ifndef QUESTIONANIMAL_H
#define QUESTIONANIMAL_H

#include <QDialog>

namespace Ui
{
    class QuestionAnimal;
}

class QuestionAnimal : public QDialog
{
    Q_OBJECT

public:

    explicit QuestionAnimal(QWidget *parent = 0);

    QString getAnimal();

    ~QuestionAnimal();

private:

    Ui::QuestionAnimal *ui;

private slots:

    void clickOK();
};

#endif // QUESTIONANIMAL_H
