#include "../include/PopcornPopper.h"

#include <iostream>


PopcornPopper::PopcornPopper(const std::string &description)
        : mDescription(description)
{}

void PopcornPopper::on()
{
    std::cout << mDescription << " on.\n";
}

void PopcornPopper::off()
{
    std::cout << mDescription << " off.\n";
}

void PopcornPopper::pop()
{
    std::cout << mDescription << " popping popcorn!\n";
}