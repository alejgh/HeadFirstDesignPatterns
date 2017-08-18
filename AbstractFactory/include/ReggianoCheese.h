#ifndef HEADFIRSTDESIGNPATTERNS_REGGIANOCHEESE_H
#define HEADFIRSTDESIGNPATTERNS_REGGIANOCHEESE_H

#include "Cheese.h"

class ReggianoCheese : public Cheese
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Reggiano Cheese";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_REGGIANOCHEESE_H
