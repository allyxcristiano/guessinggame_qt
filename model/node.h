#ifndef NODE_H
#define NODE_H

#include <QList>

namespace model
{
    class Animal;
    class Trait;
    class Node
    {

    public:

        Node(Trait* initialTrait, Animal* animalSuperiorTrait);

        Animal *getAnimalSuperiorTrait() const;

        void addTrait(Trait* trait);

        QList<Trait*> getTraits() const;

    private:

        QList<Trait*> _traits;

        Animal* _animalSuperiorTrait = nullptr;
    };
}

#endif // NODE_H
