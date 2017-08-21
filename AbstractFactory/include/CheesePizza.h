#ifndef HEADFIRSTDESIGNPATTERNS_CHEESEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHEESEPIZZA_H

#include "Pizza.h"
#include "IPizzaIngredientFactory.h"

class CheesePizza : public Pizza
{
public:
    CheesePizza(IPizzaIngredientFactory& factory);

private:
    virtual void prepare(IPizzaIngredientFactory& ingredientFactory) override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHEESEPIZZA_H
