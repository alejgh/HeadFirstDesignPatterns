#ifndef HEADFIRSTDESIGNPATTERNS_VEGGIES_H
#define HEADFIRSTDESIGNPATTERNS_VEGGIES_H

#include <memory>

class Veggies
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Veggies& veggies);
};

#endif //HEADFIRSTDESIGNPATTERNS_VEGGIES_H
