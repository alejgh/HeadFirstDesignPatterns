#ifndef HEADFIRSTDESIGNPATTERNS_MARINARASAUCE_H
#define HEADFIRSTDESIGNPATTERNS_MARINARASAUCE_H

#include "Sauce.h"

class MarinaraSauce : public Sauce
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Marinara Sauce";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_MARINARASAUCE_H
