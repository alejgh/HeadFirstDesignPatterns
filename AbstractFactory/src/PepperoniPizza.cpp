#include "PepperoniPizza.h"

#include <iostream>

PepperoniPizza::PepperoniPizza(IPizzaIngredientFactory& ingredientFactory)
        : Pizza(ingredientFactory)
{
    prepare(ingredientFactory);
}

void PepperoniPizza::prepare(IPizzaIngredientFactory& ingredientFactory)
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = std::unique_ptr<Dough>(ingredientFactory.createDough());
    mPepperoni = std::unique_ptr<Pepperoni>(ingredientFactory.createPepperoni());
    mCheese = std::unique_ptr<Cheese>(ingredientFactory.createCheese());
    mVeggies = ingredientFactory.createVeggies();
    mPepperoni = std::unique_ptr<Pepperoni>(ingredientFactory.createPepperoni());
}
