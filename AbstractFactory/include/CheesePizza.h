#ifndef HEADFIRSTDESIGNPATTERNS_CHEESEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHEESEPIZZA_H

#include "Pizza.h"
#include "IPizzaIngredientFactory.h"

class CheesePizza : public Pizza
{
private:
    IPizzaIngredientFactory mIngredientFactory;

public:
    CheesePizza(IPizzaIngredientFactory factory);

public:
    virtual void prepare() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHEESEPIZZA_H
