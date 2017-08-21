#ifndef HEADFIRSTDESIGNPATTERNS_CLAMPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CLAMPIZZA_H

#include "Pizza.h"
#include "IPizzaIngredientFactory.h"

class ClamPizza : public Pizza
{
public:
    ClamPizza(IPizzaIngredientFactory& factory);

private:
    virtual void prepare(IPizzaIngredientFactory& ingredientFactory) override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CLAMPIZZA_H
