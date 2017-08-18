#ifndef HEADFIRSTDESIGNPATTERNS_SPINACH_H
#define HEADFIRSTDESIGNPATTERNS_SPINACH_H

#include "Veggies.h"

class Spinach : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Spinach";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_SPINACH_H
