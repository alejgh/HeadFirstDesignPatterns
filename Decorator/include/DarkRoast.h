#ifndef HEADFIRSTDESIGNPATTERNS_DARKROAST_H
#define HEADFIRSTDESIGNPATTERNS_DARKROAST_H

#include "Beverage.h"

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    DarkRoast(Beverage::Size size);

public:
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_DARKROAST_H
