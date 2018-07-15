#include "guessinggameservice.h"
#include "model/animal.h"
#include "model/node.h"
#include "model/trait.h"
#include <iostream>
#include <QCoreApplication>
#include <QString>
#include <qDebug>
#include <stdio.h>
#include <stdlib.h>
#include "abstract/guessinggamemessagesabstract.h"

using namespace abstract;
using namespace model;
using namespace std;

namespace service
{
    GuessingGameService::GuessingGameService(GuessingGameMessagesAbstract *question)
    {
        this->_question = question;
        this->_question->thinkAboutAnAnimal();
    }

    void GuessingGameService::doQuestion(Node *node)
    {
        QListIterator<Trait*> traitsIterator(node->getTraits());
        GuessingGameMessagesAbstract::Response awnser;

        while (traitsIterator.hasNext())
        {
            Trait* currentTrait = traitsIterator.next();

            awnser = this->_question->doesTheAnimalThatYouThoughtAbout(currentTrait->getName());
            if (awnser == GuessingGameMessagesAbstract::Response::YES && currentTrait->getNodeForSpecializatedTrait() != nullptr)
            {
                this->doQuestion(currentTrait->getNodeForSpecializatedTrait());
                return;
            }
        }

        awnser = this->_question->isTheAnimalThatYouThoughtAboutA(node->getAnimalSuperiorTrait()->name());
        if (awnser == GuessingGameMessagesAbstract::Response::NO)
        {
            this->_question->whatWasTheAnimalThatYouThoughtAbout();
            QString animal = this->_question->getTheAnimalThatYouThoughtAbout();

            this->_question->aAnimalAHasButAnimalBDoesNot(animal, node->getAnimalSuperiorTrait()->name());
            QString trait = this->_question->getTheTraitOfAnimalThatYouThoughtAbout();

            Trait* newSpecializatedTrait = new Trait(trait);
            Animal* newAnimal = new Animal(animal);
            Node* newNode = new Node(nullptr, newAnimal);
            newSpecializatedTrait->setNodeForSpecializatedTrait(newNode);
            node->addTrait(newSpecializatedTrait);
        }
        else
        {
            this->_question->iWinAgain();
        }
    }
}
