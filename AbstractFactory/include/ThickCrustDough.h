#ifndef HEADFIRSTDESIGNPATTERNS_THICKCRUSTDOUGH_H
#define HEADFIRSTDESIGNPATTERNS_THICKCRUSTDOUGH_H

#include "Dough.h"

class ThickCrustDough : public Dough
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "ThickCrust style extra thick crust dough";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_THICKCRUSTDOUGH_H
