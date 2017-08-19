#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOPIZZAINGREDIENTFACTOR_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOPIZZAINGREDIENTFACTOR_H

#include "IPizzaIngredientFactory.h"

class ChicagoPizzaIngredientFactory : public IPizzaIngredientFactory
{
public:
    virtual Dough* createDough() override;
    virtual Sauce* createSauce() override;
    virtual Cheese* createCheese() override;
    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() override;
    virtual Pepperoni* createPepperoni() override;
    virtual Clams* createClam() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOPIZZAINGREDIENTFACTOR_H
