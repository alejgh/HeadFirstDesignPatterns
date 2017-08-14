#include "Decaf.h"

Decaf::Decaf() : Decaf(Beverage::Size::MEDIUM)
{}

Decaf::Decaf(Beverage::Size size) : Beverage("Decaf", size)
{}

double Decaf::cost() const
{
    return 1.05;
}