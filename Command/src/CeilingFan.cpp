#include "CeilingFan.h"

#include <iostream>


CeilingFan::CeilingFan(const std::string &location)
        : mLocation(location)
        , mLevel(FanLevel::OFF)
{}

FanLevel CeilingFan::getSpeed() const
{
    return mLevel;
}

void CeilingFan::low()
{
    mLevel = FanLevel::LOW;
    std::cout << mLocation << " ceiling fan is on low.\n";
}

void CeilingFan::medium()
{
    mLevel = FanLevel::MEDIUM;
    std::cout << mLocation << " ceiling fan is on medium.\n";
}

void CeilingFan::high()
{
    mLevel = FanLevel::HIGH;
    std::cout << mLocation << " ceiling fan is on high.\n";
}

void CeilingFan::off()
{
    mLevel = FanLevel::OFF;
    std::cout << mLocation << " ceiling fan is off.\n";
}