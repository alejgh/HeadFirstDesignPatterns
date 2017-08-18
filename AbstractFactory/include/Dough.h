#ifndef HEADFIRSTDESIGNPATTERNS_DOUGH_H
#define HEADFIRSTDESIGNPATTERNS_DOUGH_H

#include <ostream>

class Dough
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Dough& dough);
};


std::ostream& operator<<(std::ostream& os, const Dough& dough)
{
    return dough.print(os);
}

#endif //HEADFIRSTDESIGNPATTERNS_DOUGH_H
