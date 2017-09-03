#include "../include/Screen.h"

#include <iostream>


Screen::Screen(const std::string &description) : mDescription(description)
{}

void Screen::up()
{
    std::cout << mDescription << " is going up.\n";
}

void Screen::down()
{
    std::cout << mDescription << " is going down.\n";
}