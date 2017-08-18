#ifndef HEADFIRSTDESIGNPATTERNS_SLICEDPEPPERONI_H
#define HEADFIRSTDESIGNPATTERNS_SLICEDPEPPERONI_H

#include "Pepperoni.h"

class SlicedPepperoni : public Pepperoni
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Sliced Pepperoni";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_SLICEDPEPPERONI_H
