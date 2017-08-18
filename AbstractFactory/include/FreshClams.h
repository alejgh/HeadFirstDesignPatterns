#ifndef HEADFIRSTDESIGNPATTERNS_FRESHCLAMS_H
#define HEADFIRSTDESIGNPATTERNS_FRESHCLAMS_H

#include "Clams.h"

class FreshClams : public Clams
{
    virtual std::ostream& print(std::ostream& os) const override
    {
        os << "Fresh Clams from Long Island Sound";
        return os;
    }
};



#endif //HEADFIRSTDESIGNPATTERNS_FRESHCLAMS_H
