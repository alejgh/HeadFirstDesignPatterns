#include "ClamPizza.h"

#include <iostream>


ClamPizza::ClamPizza(IPizzaIngredientFactory& factory)
        : Pizza(factory)
{
    prepare(factory);
}

void ClamPizza::prepare(IPizzaIngredientFactory& ingredientFactory)
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = std::unique_ptr<Dough>(ingredientFactory.createDough());
    mSauce = std::unique_ptr<Sauce>(ingredientFactory.createSauce());
    mCheese = std::unique_ptr<Cheese>(ingredientFactory.createCheese());
    mClam = std::unique_ptr<Clams>(ingredientFactory.createClam());
}