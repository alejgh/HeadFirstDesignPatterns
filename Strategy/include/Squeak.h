#ifndef HEADFIRSTDESIGNPATTERNS_SQUEAK_H
#define HEADFIRSTDESIGNPATTERNS_SQUEAK_H

#include "IQuackBehavior.h"

#include <iostream>


class Squeak : public IQuackBehavior
{
public:
    virtual void quack() override
    {
        std::cout << "Squeak" << std::endl;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_SQUEAK_H
