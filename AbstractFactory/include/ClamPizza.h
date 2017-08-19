#ifndef HEADFIRSTDESIGNPATTERNS_CLAMPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CLAMPIZZA_H

#include "Pizza.h"
#include "IPizzaIngredientFactory.h"

class ClamPizza : public Pizza
{
public:
    ClamPizza(IPizzaIngredientFactory factory);

public:
    virtual void prepare() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CLAMPIZZA_H
