#ifndef HEADFIRSTDESIGNPATTERNS_MOZZARELLACHEESE_H
#define HEADFIRSTDESIGNPATTERNS_MOZZARELLACHEESE_H

#include "Cheese.h"

class MozzarellaCheese : public Cheese
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Shredded Mozzarella";
        return os;
    }
};

#endif //HEADFIRSTDESIGNPATTERNS_MOZZARELLACHEESE_H
