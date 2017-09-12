#include "../include/MenuItem.h"

#include <iostream>


MenuItem::MenuItem(const std::string &name, const std::string &description,
                   bool vegetarian, double price)
        : mName(name)
        , mDescription(description)
        , mIsVegetarian(vegetarian)
        , mPrice(price)
{
}

const std::string & MenuItem::getName() const
{
    return mName;
}

const std::string & MenuItem::getDescription() const
{
    return mDescription;
}

bool MenuItem::isVegetarian() const
{
    return mIsVegetarian;
}

double MenuItem::getPrice() const
{
    return mPrice;
}

std::ostream& operator<<(std::ostream& os, const MenuItem& menuItem)
{
    os << menuItem.getName() << ", $" << menuItem.getPrice() << "\n   "
       << menuItem.getDescription() << std::endl;
}