#include "CondimentDecorator.h"


CondimentDecorator::CondimentDecorator(Beverage *beverage)
        : Beverage()
        , mBeverage(beverage)
{
}

CondimentDecorator::~CondimentDecorator()
{
    delete mBeverage;
}

Beverage::Size CondimentDecorator::getSize() const
{
    return mBeverage->getSize();
}