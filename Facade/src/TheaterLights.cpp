#include "TheaterLights.h"

#include <iostream>


TheaterLights::TheaterLights(const std::string &description)
        : mDescription(description)
{
}

void TheaterLights::on()
{
    std::cout << mDescription << " on.\n";
}

void TheaterLights::off()
{
    std::cout << mDescription << " off.\n";
}

void TheaterLights::dim(int level)
{
    std::cout << mDescription << " dimming to " << level << "%.\n";
}