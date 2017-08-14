#include "DarkRoast.h"

DarkRoast::DarkRoast() : DarkRoast(Beverage::Size::MEDIUM)
{}

DarkRoast::DarkRoast(Beverage::Size size) : Beverage("Dark Roast", size)
{}

double DarkRoast::cost() const
{
    return 0.99;
}