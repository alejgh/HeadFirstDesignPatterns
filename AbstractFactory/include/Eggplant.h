#ifndef HEADFIRSTDESIGNPATTERNS_EGGPLANT_H
#define HEADFIRSTDESIGNPATTERNS_EGGPLANT_H

#include "Veggies.h"

class Eggplant : public Veggies
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Eggplant";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_EGGPLANT_H
