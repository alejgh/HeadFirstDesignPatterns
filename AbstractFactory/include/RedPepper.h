#ifndef HEADFIRSTDESIGNPATTERNS_REDPEPPER_H
#define HEADFIRSTDESIGNPATTERNS_REDPEPPER_H

#include "Veggies.h"

class RedPepper : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Red Pepper";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_REDPEPPER_H
