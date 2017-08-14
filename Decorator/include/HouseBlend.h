#ifndef HEADFIRSTDESIGNPATTERNS_HOUSEBLEND_H
#define HEADFIRSTDESIGNPATTERNS_HOUSEBLEND_H

#include "Beverage.h"


class HouseBlend : public Beverage
{
public:
    HouseBlend();
    HouseBlend(Beverage::Size size);

public:
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_HOUSEBLEND_H
