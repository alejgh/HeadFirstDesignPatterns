#include "ClamPizza.h"

#include <iostream>


ClamPizza::ClamPizza(IPizzaIngredientFactory factory)
        : Pizza(factory)
{
}

void ClamPizza::prepare()
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = std::unique_ptr(mIngredientFactory.createDough());
    mSauce = std::unique_ptr(mIngredientFactory.createSauce());
    mCheese = std::unique_ptr(mIngredientFactory.createCheese());
    mClam = std::unique_ptr(mIngredientFactory.createClam());
}