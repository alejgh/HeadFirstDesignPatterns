#include "Beverage.h"

Beverage::Beverage() : mDescription("Unknown beverage"), mSize(Size::MEDIUM)
{
}

Beverage::Beverage(const std::string& description, Size size)
        : mDescription(description)
        , mSize(size)
{
}

Beverage::~Beverage()
{
}

std::string Beverage::getDescription() const
{
    return mDescription;
}

Beverage::Size Beverage::getSize() const
{
    return mSize;
}

void Beverage::setSize(Beverage::Size newSize)
{
    mSize = newSize;
}
