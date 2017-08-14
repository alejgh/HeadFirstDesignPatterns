#ifndef HEADFIRSTDESIGNPATTERNS_DECAF_H
#define HEADFIRSTDESIGNPATTERNS_DECAF_H

#include "Beverage.h"

class Decaf : public Beverage
{
public:
    Decaf();
    Decaf(Beverage::Size size);

public:
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_DECAF_H
