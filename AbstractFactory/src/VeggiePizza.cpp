#include "VeggiePizza.h"

#include <iostream>


VeggiePizza::VeggiePizza(IPizzaIngredientFactory& factory)
        : Pizza(factory)
{
    prepare(factory);
}

void VeggiePizza::prepare(IPizzaIngredientFactory& ingredientFactory)
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = std::unique_ptr<Dough>(ingredientFactory.createDough());
    mSauce = std::unique_ptr<Sauce>(ingredientFactory.createSauce());
    mCheese = std::unique_ptr<Cheese>(ingredientFactory.createCheese());
    mVeggies = ingredientFactory.createVeggies();

}
