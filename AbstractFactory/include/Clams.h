#ifndef HEADFIRSTDESIGNPATTERNS_CLAMS_H
#define HEADFIRSTDESIGNPATTERNS_CLAMS_H

#include <ostream>

class Clams
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Clams& clams);
};


#endif //HEADFIRSTDESIGNPATTERNS_CLAMS_H
