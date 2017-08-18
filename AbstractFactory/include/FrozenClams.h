#ifndef HEADFIRSTDESIGNPATTERNS_FROZENCLAMS_H
#define HEADFIRSTDESIGNPATTERNS_FROZENCLAMS_H

#include "Clams.h"

class FrozenClams : public Clams
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Frozen Clams from Chesapeake Bay";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_FROZENCLAMS_H
