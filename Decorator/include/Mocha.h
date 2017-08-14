#ifndef HEADFIRSTDESIGNPATTERNS_MOCHA_H
#define HEADFIRSTDESIGNPATTERNS_MOCHA_H

#include "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage* beverage);

public:
    virtual std::string getDescription() const override;
    virtual double cost() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_MOCHA_H
