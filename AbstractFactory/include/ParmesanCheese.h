#ifndef HEADFIRSTDESIGNPATTERNS_PARMESANCHEESE_H
#define HEADFIRSTDESIGNPATTERNS_PARMESANCHEESE_H

#include "Cheese.h"

class ParmesanCheese : public Cheese
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Shredded Parmesan";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_PARMESANCHEESE_H
