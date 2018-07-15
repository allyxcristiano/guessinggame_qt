#include <QString>
#include "animal.h"

namespace model
{
    Animal::Animal(QString name)
    {
        this->_name = name;
    }

    QString Animal::name() const
    {
        return _name;
    }
}
