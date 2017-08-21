#ifndef HEADFIRSTDESIGNPATTERNS_PEPPERONI_H
#define HEADFIRSTDESIGNPATTERNS_PEPPERONI_H

#include <iostream>

class Pepperoni
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Pepperoni& pepperoni);
};

#endif //HEADFIRSTDESIGNPATTERNS_PEPPERONI_H
