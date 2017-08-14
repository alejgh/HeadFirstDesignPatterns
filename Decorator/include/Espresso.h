#ifndef HEADFIRSTDESIGNPATTERNS_ESPRESSO_H
#define HEADFIRSTDESIGNPATTERNS_ESPRESSO_H

#include "Beverage.h"

class Espresso : public Beverage
{
public:
    Espresso();
    Espresso(Beverage::Size size);

public:
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_ESPRESSO_H
