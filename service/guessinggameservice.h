#ifndef GUESSINGGAMESERVICE_H
#define GUESSINGGAMESERVICE_H

#include "abstract/guessinggamemessagesabstract.h"

namespace model
{
    class Node;
}

namespace service
{
    class GuessingGameService
    {

    public:

        explicit GuessingGameService(abstract::GuessingGameMessagesAbstract *question);

        void doQuestion(model::Node* node);

    private:

        abstract::GuessingGameMessagesAbstract* _question = nullptr;
    };
}

#endif // GUESSINGGAMESERVICE_H
