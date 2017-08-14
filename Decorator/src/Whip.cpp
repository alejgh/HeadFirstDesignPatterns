#include "Whip.h"

Whip::Whip(Beverage *beverage) : CondimentDecorator(beverage)
{}

std::string Whip::getDescription() const
{
    return mBeverage->getDescription() + ", Whip";
}

double Whip::cost() const
{
    return 0.10 + mBeverage->cost();
}
