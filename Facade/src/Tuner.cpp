#include "../include/Tuner.h"

#include <iostream>


Tuner::Tuner(const std::string &description, Amplifier& amplifier)
        : mDescription(description)
        , mAmplifier(amplifier)
        , mFrequency()
{
}

void Tuner::on()
{
    std::cout << mDescription << " on.\n";
}

void Tuner::off()
{
    std::cout << mDescription << " off.\n";
}

void Tuner::setFrequency(double newFrequency)
{
    std::cout << mDescription << " setting frequency to " << newFrequency << ".\n";
    mFrequency = newFrequency;
}

void Tuner::setAm()
{
    std::cout << mDescription << " setting AM mode.\n";
}

void Tuner::setFm()
{
    std::cout << mDescription << " setting FM mode.\n";
}
