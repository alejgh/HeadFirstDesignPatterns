#include "PepperoniPizza.h"

#include <iostream>

PepperoniPizza::PepperoniPizza(IPizzaIngredientFactory ingredientFactory)
        : Pizza(ingredientFactory)
{}

void PepperoniPizza::prepare()
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = mIngredientFactory.createDough();
    mPepperoni = mIngredientFactory.createPepperoni();
    mCheese = mIngredientFactory.createCheese();
    mVeggies = mIngredientFactory.createVeggies();
    mPepperoni = mIngredientFactory.createPepperoni();
}
