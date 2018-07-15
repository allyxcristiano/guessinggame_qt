#ifndef TRAIT_H
#define TRAIT_H

class QString;

namespace model
{
    class Node;
    class Trait
    {

    public:

        Trait(QString name);

        QString getName() const;

        Node *getNodeForSpecializatedTrait() const;
        void setNodeForSpecializatedTrait(Node *nodeForSpecializatedTrait);

    private:

        QString _name;

        Node* _nodeForSpecializatedTrait = nullptr;
    };
}

#endif // TRAIT_H
