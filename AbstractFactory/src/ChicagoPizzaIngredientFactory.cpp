#include "ChicagoPizzaIngredientFactory.h"
#include "ThickCrustDough.h"
#include "PlumTomatoSauce.h"
#include "MozzarellaCheese.h"
#include "BlackOlives.h"
#include "Spinach.h"
#include "Eggplant.h"
#include "SlicedPepperoni.h"
#include "FrozenClams.h"


Dough* ChicagoPizzaIngredientFactory::createDough()
{
    return new ThickCrustDough();
}

Sauce* ChicagoPizzaIngredientFactory::createSauce()
{
    return new PlumTomatoSauce();
}

Cheese* ChicagoPizzaIngredientFactory::createCheese()
{
    return new MozzarellaCheese();
}

std::vector<std::unique_ptr<Veggies>> ChicagoPizzaIngredientFactory::createVeggies()
{
    std::vector<std::unique_ptr<Veggies>> veggies;
    veggies.push_back(std::unique_ptr<Veggies>(new BlackOlives()));
    veggies.push_back(std::unique_ptr<Veggies>(new Spinach()));
    veggies.push_back(std::unique_ptr<Veggies>(new Eggplant()));
    return veggies;
}

Pepperoni* ChicagoPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni();
}

Clams* ChicagoPizzaIngredientFactory::createClam()
{
    return new FrozenClams();
}