#ifndef GUESSINGGAMEMESSAGESABSTRACT_H
#define GUESSINGGAMEMESSAGESABSTRACT_H

#include <QString>

namespace abstract
{
    class GuessingGameMessagesAbstract
    {
        public:

            enum Response{NO, YES};

            GuessingGameMessagesAbstract(){}

            virtual void thinkAboutAnAnimal() = 0;

            virtual Response doesTheAnimalThatYouThoughtAbout(QString trait) = 0;

            virtual Response isTheAnimalThatYouThoughtAboutA(QString animal) = 0;

            virtual void whatWasTheAnimalThatYouThoughtAbout() = 0;

            virtual void aAnimalAHasButAnimalBDoesNot(QString animalA, QString animalB) = 0;

            virtual QString getTheAnimalThatYouThoughtAbout() = 0;

            virtual QString getTheTraitOfAnimalThatYouThoughtAbout() = 0;

            virtual void iWinAgain() = 0;
        };
}

#endif // GUESSINGGAMEMESSAGESABSTRACT_H
