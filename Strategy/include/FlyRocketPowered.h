#ifndef HEADFIRSTDESIGNPATTERNS_FLYROCKETPOWERED_H
#define HEADFIRSTDESIGNPATTERNS_FLYROCKETPOWERED_H

#include "IFlyBehavior.h"

#include <iostream>

class FlyRocketPowered : public IFlyBehavior
{
public:
    virtual void fly() override
    {
        std::cout << "I'm flying with a rocket!" << std::endl;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_FLYROCKETPOWERED_H
