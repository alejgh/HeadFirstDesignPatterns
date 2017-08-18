#ifndef HEADFIRSTDESIGNPATTERNS_SAUCE_H
#define HEADFIRSTDESIGNPATTERNS_SAUCE_H

#include <ostream>

class Sauce
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Sauce& sauce);
};


std::ostream& operator<<(std::ostream& os, const Sauce& sauce)
{
    return sauce.print(os);
}

#endif //HEADFIRSTDESIGNPATTERNS_SAUCE_H
