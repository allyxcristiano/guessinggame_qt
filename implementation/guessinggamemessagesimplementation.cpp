#include "guessinggamemessagesimplementation.h"
#include <QMessageBox>
#include "view/questionanimal.h"
#include "view/questionanimaltrait.h"

using namespace abstract;

namespace implementation
{
    GuessingGameMessagesImplementation::GuessingGameMessagesImplementation() : GuessingGameMessagesAbstract()
    {
    }

    void GuessingGameMessagesImplementation::thinkAboutAnAnimal()
    {
        QMessageBox::information(nullptr, "Guessing Game", "Think about an animal...");
    }

    GuessingGameMessagesAbstract::Response GuessingGameMessagesImplementation::doesTheAnimalThatYouThoughtAbout(QString trait)
    {
        int reponse = QMessageBox::question(nullptr, "Guessing Game", QString("Does the animal that you thought about %1?").arg(trait), QMessageBox::No, QMessageBox::Yes);
        return reponse == QMessageBox::No? Response::NO : Response::YES;
    }

    GuessingGameMessagesAbstract::Response GuessingGameMessagesImplementation::isTheAnimalThatYouThoughtAboutA(QString animal)
    {
        QString question = QString("Is the animal that you thought about a %1").arg(animal);
        int reponse = QMessageBox::question(nullptr, "Guessing Game", question, QMessageBox::No, QMessageBox::Yes);
        return reponse == QMessageBox::No? Response::NO : Response::YES;
    }

    void GuessingGameMessagesImplementation::whatWasTheAnimalThatYouThoughtAbout()
    {
        QuestionAnimal questionAnimal;
        if (questionAnimal.exec() == QDialog::Accepted)
            this->_theAnimalThatYouThoughtAbout = questionAnimal.getAnimal();
    }

    void GuessingGameMessagesImplementation::aAnimalAHasButAnimalBDoesNot(QString animalA, QString animalB)
    {
        QuestionAnimalTrait questionAnimalTrait(animalA, animalB);
        if (questionAnimalTrait.exec() == QDialog::Accepted)
            this->_theTraitOfAnimalThatYouThoughtAbout = questionAnimalTrait.getAnimalTrait();
    }

    QString GuessingGameMessagesImplementation::getTheAnimalThatYouThoughtAbout()
    {
        return this->_theAnimalThatYouThoughtAbout;
    }

    QString GuessingGameMessagesImplementation::getTheTraitOfAnimalThatYouThoughtAbout()
    {
        return this->_theTraitOfAnimalThatYouThoughtAbout;
    }

    void GuessingGameMessagesImplementation::iWinAgain()
    {
        QMessageBox::information(nullptr, "Guessing Game", "I win again!");
    }
}
