#ifndef HEADFIRSTDESIGNPATTERNS_GARLIC_H
#define HEADFIRSTDESIGNPATTERNS_GARLIC_H

#include "Veggies.h"

class Garlic : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Garlic";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_GARLIC_H
