#include <QApplication>
#include <stdlib.h>
#include <qDebug>
#include "stdio.h"
#include <iostream>
#include "model/node.h"
#include "model/animal.h"
#include "model/trait.h"
#include "service/guessinggameservice.h"
#include "implementation/guessinggamemessagesimplementation.h"

using namespace abstract;
using namespace implementation;
using namespace model;
using namespace service;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Trait* livesInWater = new Trait("lives in water");
    Node* root = new Node(livesInWater, new Animal("monkey"));
    Node* firstChildNode = new Node(nullptr, new Animal("shark"));
    livesInWater->setNodeForSpecializatedTrait(firstChildNode);

    forever
    {
        GuessingGameMessagesAbstract* questionMessageBox = new GuessingGameMessagesImplementation();
        GuessingGameService(questionMessageBox).doQuestion(root);
    }

    return a.exec();
}
