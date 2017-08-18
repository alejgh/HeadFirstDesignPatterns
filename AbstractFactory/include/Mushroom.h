#ifndef HEADFIRSTDESIGNPATTERNS_MUSHROOM_H
#define HEADFIRSTDESIGNPATTERNS_MUSHROOM_H

#include "Veggies.h"

class Mushroom : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Mushrooms";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_MUSHROOM_H
