#include "HouseBlend.h"

HouseBlend::HouseBlend()
        : HouseBlend(Beverage::Size::MEDIUM)
{}

HouseBlend::HouseBlend(Beverage::Size size) : Beverage("House Blend", size) {}

double HouseBlend::cost() const
{
    return 0.89;
}