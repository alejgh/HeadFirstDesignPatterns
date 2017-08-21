#include "Pizza.h"

#include <iostream>
#include <string>


Pizza::Pizza(IPizzaIngredientFactory& ingredientFactory)
        : mName()
        , mDough()
        , mSauce()
        , mVeggies()
        , mCheese()
        , mPepperoni()
        , mClam()
{
}

void Pizza::bake()
{
    std::cout << "Bake for 25 minutes at 350.\n";
}

void Pizza::box()
{
    std::cout << "Place pizza in official PizzaStore box.\n";
}

void Pizza::cut()
{
    std::cout << "Cutting the pizza into diagonal slices.\n";
}

std::string Pizza::getName() const
{
    return mName;
}

void Pizza::setName(const std::string &newName)
{
    mName = newName;
}

std::ostream& operator<<(std::ostream& os, const Pizza& pizza)
{
    os << pizza.getName();
    return os;
}
