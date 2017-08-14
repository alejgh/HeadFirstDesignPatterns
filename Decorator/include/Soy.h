#ifndef HEADFIRSTDESIGNPATTERNS_SOY_H
#define HEADFIRSTDESIGNPATTERNS_SOY_H

#include "CondimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
    Soy(Beverage* beverage);

public:
    virtual std::string getDescription() const override;
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_SOY_H
