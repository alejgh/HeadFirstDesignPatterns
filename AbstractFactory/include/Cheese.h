#ifndef HEADFIRSTDESIGNPATTERNS_CHEESE_H
#define HEADFIRSTDESIGNPATTERNS_CHEESE_H

#include <ostream>

class Cheese
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Cheese& cheese);
};


std::ostream& operator<<(std::ostream& os, const Cheese& cheese)
{
    return cheese.print(os);
}

#endif //HEADFIRSTDESIGNPATTERNS_CHEESE_H
