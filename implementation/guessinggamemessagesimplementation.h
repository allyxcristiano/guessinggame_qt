#ifndef GUESSINGGAMEMESSAGESIMPLEMENTATION_H
#define GUESSINGGAMEMESSAGESIMPLEMENTATION_H

#include "abstract/guessinggamemessagesabstract.h"

namespace implementation
{
    class GuessingGameMessagesImplementation : public abstract::GuessingGameMessagesAbstract
    {

    public:

        GuessingGameMessagesImplementation();

        virtual void thinkAboutAnAnimal();

        Response doesTheAnimalThatYouThoughtAbout(QString trait);

        Response isTheAnimalThatYouThoughtAboutA(QString animal);

        void whatWasTheAnimalThatYouThoughtAbout();

        void aAnimalAHasButAnimalBDoesNot(QString animalA, QString animalB);

        QString getTheAnimalThatYouThoughtAbout();

        QString getTheTraitOfAnimalThatYouThoughtAbout();

        void iWinAgain();

    private:

        QString _theAnimalThatYouThoughtAbout;

        QString _theTraitOfAnimalThatYouThoughtAbout;
    };
}

#endif // GUESSINGGAMEMESSAGESIMPLEMENTATION_H
