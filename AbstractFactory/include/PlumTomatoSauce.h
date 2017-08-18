#ifndef HEADFIRSTDESIGNPATTERNS_PLUMTOMATOSAUCE_H
#define HEADFIRSTDESIGNPATTERNS_PLUMTOMATOSAUCE_H

#include "Sauce.h"

class PlumTomatoSauce : public Sauce
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Tomato sauce with plum tomatoes";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_PLUMTOMATOSAUCE_H
