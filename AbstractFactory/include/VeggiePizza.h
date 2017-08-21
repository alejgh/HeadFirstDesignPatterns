#ifndef HEADFIRSTDESIGNPATTERNS_VEGGIEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_VEGGIEPIZZA_H

#include "Pizza.h"

class VeggiePizza : public Pizza
{
public:
    VeggiePizza(IPizzaIngredientFactory& factory);

private:
    virtual void prepare(IPizzaIngredientFactory& ingredientFactory) override;
};


#endif //HEADFIRSTDESIGNPATTERNS_VEGGIEPIZZA_H
