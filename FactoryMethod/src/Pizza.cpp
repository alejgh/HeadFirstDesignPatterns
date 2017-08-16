#include "Pizza.h"

#include <iostream>


Pizza::Pizza() : Pizza("", "", "") {}

Pizza::Pizza(const std::string& name, const std::string& dough, const std::string& sauce)
        : mName(name)
        , mDough(dough)
        , mSauce(sauce)
        , mToppings()
{
}

Pizza::~Pizza() {}

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

void Pizza::prepare()
{
    std::cout << "Preparing " << getName() << std::endl;
    std::cout << "Tossing dough...\n";
    std::cout << "Adding sauce...\n";
    std::cout << "Adding toppings: \n";

    for (auto& topping : mToppings)
        std::cout << " - " << topping << std::endl;
}