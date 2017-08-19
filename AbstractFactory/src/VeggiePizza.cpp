#include "VeggiePizza.h"

#include <iostream>


VeggiePizza::VeggiePizza(IPizzaIngredientFactory factory)
        : Pizza(factory)
{}

void VeggiePizza::prepare()
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = std::unique_ptr(mIngredientFactory.createDough());
    mSauce = std::unique_ptr(mIngredientFactory.createSauce());
    mCheese = std::unique_ptr(mIngredientFactory.createCheese());
    mVeggies = mIngredientFactory.createVeggies();

}
