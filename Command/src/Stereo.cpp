#include "Stereo.h"

#include <iostream>


Stereo::Stereo(const std::string &location) : mLocation(location)
{}

void Stereo::on()
{
    std::cout << mLocation << " stereo is on.\n";
}

void Stereo::off()
{
    std::cout << mLocation << " stereo is off.\n";
}

void Stereo::setCD()
{
    std::cout << mLocation << " stereo is set for CD input.\n";
}

void Stereo::setDvd()
{
    std::cout << mLocation << " stereo is set for DVD input.\n";
}

void Stereo::setRadio()
{
    std::cout << mLocation << " stereo is set for Radio.\n";
}

void Stereo::setVolume(int volume)
{
    std::cout << mLocation << " Stereo volume set to " << volume << std::endl;
}