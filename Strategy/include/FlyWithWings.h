#ifndef HEADFIRSTDESIGNPATTERNS_FLYWITHWINGS_H
#define HEADFIRSTDESIGNPATTERNS_FLYWITHWINGS_H

#include "IFlyBehavior.h"

#include <iostream>


class FlyWithWings : public IFlyBehavior
{
public:
    virtual void fly() override
    {
        std::cout << "I'm flying!" << std::endl;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_FLYWITHWINGS_H
