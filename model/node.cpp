#include <iostream>
#include <QCoreApplication>
#include <qDebug>
#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "node.h"
#include "trait.h"

using namespace std;

namespace model
{
    Node::Node(Trait *initialTrait, Animal *animalSuperiorTrait)
    {
        if (initialTrait != nullptr)
        {
            this->_traits << initialTrait;
            initialTrait->setNodeForSpecializatedTrait(this);
        }

        this->_animalSuperiorTrait = animalSuperiorTrait;
    }

    Animal *Node::getAnimalSuperiorTrait() const
    {
        return _animalSuperiorTrait;
    }

    void Node::addTrait(Trait *trait)
    {
        this->_traits << trait;
    }

    QList<Trait *> Node::getTraits() const
    {
        return _traits;
    }
}
