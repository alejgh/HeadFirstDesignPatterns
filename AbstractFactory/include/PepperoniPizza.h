#ifndef HEADFIRSTDESIGNPATTERNS_PEPPERONIPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_PEPPERONIPIZZA_H

#include "Pizza.h"

class PepperoniPizza : public Pizza
{
public:
    PepperoniPizza(IPizzaIngredientFactory ingredientFactory);

public:
    virtual void prepare() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_PEPPERONIPIZZA_H
