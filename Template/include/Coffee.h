#ifndef HEADFIRSTDESIGNPATTERNS_COFFEE_H
#define HEADFIRSTDESIGNPATTERNS_COFFEE_H

#include "CaffeineBeverage.h"

class Coffee : public CaffeineBeverage
{
private:
    virtual void brew() override;
    virtual void addCondiments() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_COFFEE_H
