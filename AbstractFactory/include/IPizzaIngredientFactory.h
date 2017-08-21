#ifndef HEADFIRSTDESIGNPATTERNS_IPIZZAINGREDIENTFACTORY_H
#define HEADFIRSTDESIGNPATTERNS_IPIZZAINGREDIENTFACTORY_H

#include <memory>
#include <vector>

class Dough;
class Sauce;
class Cheese;
class Veggies;
class Pepperoni;
class Clams;

class IPizzaIngredientFactory
{
public:
    virtual ~IPizzaIngredientFactory() {};

public:
    virtual Dough* createDough() = 0;
    virtual Sauce* createSauce() = 0;
    virtual Cheese* createCheese() = 0;
    virtual std::vector<std::unique_ptr<Veggies>> createVeggies() = 0;
    virtual Pepperoni* createPepperoni() = 0;
    virtual Clams* createClam() = 0;
};

#endif //HEADFIRSTDESIGNPATTERNS_IPIZZAINGREDIENTFACTORY_H
