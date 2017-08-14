#include "Mocha.h"

Mocha::Mocha(Beverage *beverage) : CondimentDecorator(beverage)
{}

std::string Mocha::getDescription() const
{
    return mBeverage->getDescription() + ", Mocha";
}


double Mocha::cost() const
{
    return 0.20 + mBeverage->cost();
}

