#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>

namespace model
{
    class Animal
    {

    public:

        Animal(QString name);

        QString name() const;

    private:

        QString _name;
    };
}

#endif // ANIMAL_H
