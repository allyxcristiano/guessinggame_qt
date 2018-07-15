#include <QString>
#include "trait.h"
#include "node.h"

namespace model
{
    Trait::Trait(QString name)
    {
        this->_name = name;
    }

    QString Trait::getName() const
    {
        return _name;
    }

    Node *Trait::getNodeForSpecializatedTrait() const
    {
        return _nodeForSpecializatedTrait;
    }

    void Trait::setNodeForSpecializatedTrait(Node *nodeForSpecializatedTrait)
    {
        this->_nodeForSpecializatedTrait = nodeForSpecializatedTrait;
    }
}
