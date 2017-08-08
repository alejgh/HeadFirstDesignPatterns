#ifndef HEADFIRSTDESIGNPATTERNS_MUTEQUACK_H
#define HEADFIRSTDESIGNPATTERNS_MUTEQUACK_H

#include "IQuackBehavior.h"

#include <iostream>


class MuteQuack : public IQuackBehavior
{
public:
    virtual void quack() override
    {
        std::cout << "<< Silence >>" << std::endl;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_MUTEQUACK_H
