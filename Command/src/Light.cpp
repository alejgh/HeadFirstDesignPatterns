#include "Light.h"

#include <iostream>

Light::Light(const std::string &location)
        : mLocation(location)
{}

void Light::on()
{
    std::cout << mLocation << " light is on.\n";
}

void Light::off()
{
    std::cout << mLocation << " light is off.\n";
}