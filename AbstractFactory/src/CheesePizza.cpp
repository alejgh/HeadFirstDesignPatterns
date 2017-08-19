#include "CheesePizza.h"

#include "iostream"

CheesePizza::CheesePizza(IPizzaIngredientFactory factory)
        : mIngredientFactory(factory)
{
}

void CheesePizza::prepare()
{
    std::cout << "Preparing " << mName << std::endl;

    mDough = std::unique_ptr(mIngredientFactory.createDough());
    mSauce = std::unique_ptr(mIngredientFactory.createSauce());
    mCheese = std::unique_ptr(mIngredientFactory.createCheese());
}
