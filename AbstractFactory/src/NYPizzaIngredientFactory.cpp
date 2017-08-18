#include "NYPizzaIngredientFactory.h"
#include "ThinCrustDough.h"
#include "MarinaraSauce.h"
#include "ReggianoCheese.h"
#include "Garlic.h"
#include "Onion.h"
#include "FreshClams.h"
#include "SlicedPepperoni.h"
#include "Mushroom.h"
#include "RedPepper.h"

#include <vector>
#include <memory>


Dough* NYPizzaIngredientFactory::createDough()
{
    return new ThinCrustDough();
}

Sauce* NYPizzaIngredientFactory::createSauce()
{
    return new MarinaraSauce();
}

Cheese* NYPizzaIngredientFactory::createCheese()
{
    return new ReggianoCheese();
}

std::vector<std::unique_ptr<Veggies>> NYPizzaIngredientFactory::createVeggies()
{
    std::vector<std::unique_ptr<Veggies>> ret;
    ret.push_back(std::unique_ptr<Veggies>(new Garlic()));
    ret.push_back(std::unique_ptr<Veggies>(new Onion()));
    ret.push_back(std::unique_ptr<Veggies>(new Mushroom()));
    ret.push_back(std::unique_ptr<Veggies>(new RedPepper()));
    return ret;
}

Pepperoni* NYPizzaIngredientFactory::createPepperoni()
{
    return new SlicedPepperoni();
}

Clams* NYPizzaIngredientFactory::createClam()
{
    return new FreshClams();
}