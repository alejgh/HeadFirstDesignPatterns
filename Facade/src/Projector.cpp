#include "Projector.h"

#include <iostream>


Projector::Projector(const std::string &description, DvdPlayer &dvdPlayer)
        : mDescription(description)
        , mDvdPlayer(dvdPlayer)
{
}

void Projector::on()
{
    std::cout << mDescription << " on.\n";
}

void Projector::off()
{
    std::cout << mDescription << " off.\n";
}

void Projector::wideScreenMode()
{
    std::cout << mDescription << " in wide screen mode (16:9).\n";
}

void Projector::tvMode()
{
    std::cout << mDescription << " in tv mode (4:3).\n";
}