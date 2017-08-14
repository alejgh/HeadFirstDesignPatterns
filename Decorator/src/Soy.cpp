#include "Soy.h"

Soy::Soy(Beverage *beverage) : CondimentDecorator(beverage)
{}

std::string Soy::getDescription() const
{
    return mBeverage->getDescription() + ", Soy";
}

double Soy::cost() const
{
    double baseCost = mBeverage->cost();
    switch(mBeverage->getSize())
    {
        case Beverage::Size::SMALL:
            baseCost += 0.10;
            break;
        case Beverage::Size::MEDIUM:
            baseCost += 0.15;
            break;
        case Beverage::Size::BIG:
            baseCost += 0.20;
            break;
    }
    return baseCost;
}