#ifndef HEADFIRSTDESIGNPATTERNS_FLYNOWAY_H
#define HEADFIRSTDESIGNPATTERNS_FLYNOWAY_H

#include "IFlyBehavior.h"

#include <iostream>


class FlyNoWay : public IFlyBehavior
{
public:
    virtual void fly() override
    {
        std::cout << "I can't fly :(" << std::endl;
    }

};

#endif //HEADFIRSTDESIGNPATTERNS_FLYNOWAY_H
