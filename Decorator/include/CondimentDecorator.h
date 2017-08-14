#ifndef HEADFIRSTDESIGNPATTERNS_CONDIMENTDECORATOR_H
#define HEADFIRSTDESIGNPATTERNS_CONDIMENTDECORATOR_H

#include "Beverage.h"

class CondimentDecorator : public Beverage {
protected:
    Beverage *mBeverage;

protected:
    CondimentDecorator(Beverage *beverage);
    ~CondimentDecorator();


public:
    virtual std::string getDescription() const override = 0;
    virtual Size getSize() const override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CONDIMENTDECORATOR_H
