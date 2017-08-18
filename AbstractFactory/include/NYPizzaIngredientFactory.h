#ifndef HEADFIRSTDESIGNPATTERNS_NYPIZZAINGREDIENTFACTORY_H
#define HEADFIRSTDESIGNPATTERNS_NYPIZZAINGREDIENTFACTORY_H

#include "IPizzaIngredientFactory.h"


class NYPizzaIngredientFactory : public IPizzaIngredientFactory
{
public:
    virtual Dough* createDough() override;
    virtual Sauce* createSauce() override;
    virtual Cheese* createCheese() override;
    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() override;
    virtual Pepperoni* createPepperoni() override;
    virtual Clams* createClam() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_NYPIZZAINGREDIENTFACTORY_H
