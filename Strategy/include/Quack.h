#ifndef HEADFIRSTDESIGNPATTERNS_QUACK_H
#define HEADFIRSTDESIGNPATTERNS_QUACK_H

#include "IQuackBehavior.h"

#include <iostream>


class Quack : public IQuackBehavior
{
public:
    virtual void quack() override
    {
        std::cout << "Quack" << std::endl;
    }

};

#endif //HEADFIRSTDESIGNPATTERNS_QUACK_H
