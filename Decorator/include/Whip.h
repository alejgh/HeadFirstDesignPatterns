#ifndef HEADFIRSTDESIGNPATTERNS_WHIP_H
#define HEADFIRSTDESIGNPATTERNS_WHIP_H

#include "CondimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage* beverage);

public:
    virtual std::string getDescription() const override;
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_WHIP_H
