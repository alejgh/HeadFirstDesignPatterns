#ifndef HEADFIRSTDESIGNPATTERNS_ONION_H
#define HEADFIRSTDESIGNPATTERNS_ONION_H

#include "Veggies.h"

class Onion : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Onion";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_ONION_H
