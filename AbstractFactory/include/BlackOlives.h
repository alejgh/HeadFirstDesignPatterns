#ifndef HEADFIRSTDESIGNPATTERNS_BLACKOLIVES_H
#define HEADFIRSTDESIGNPATTERNS_BLACKOLIVES_H

#include "Veggies.h"

class BlackOlives : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Black Olives";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_BLACKOLIVES_H
