#ifndef HEADFIRSTDESIGNPATTERNS_THINCRUSTDOUGH_H
#define HEADFIRSTDESIGNPATTERNS_THINCRUSTDOUGH_H

#include "Dough.h"

class ThinCrustDough : public Dough
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Thin Crust Dough";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_THINCRUSTDOUGH_H
