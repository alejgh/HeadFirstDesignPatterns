#include "Amplifier.h"

#include <cassert>
#include <iostream>


Amplifier::Amplifier(const std::string &description)
        : mDescription(description)
{
}

void Amplifier::on()
{
    std::cout << mDescription << " on.\n";
}

void Amplifier::off()
{
    std::cout << mDescription << " off.\n";
}

void Amplifier::setStereoSound()
{
    std::cout << mDescription << " stereo mode on.\n";
}

void Amplifier::setSurroundSound()
{
    std::cout << mDescription << " surround sound on (5 speakers, 1 subwoofer).\n";
}

void Amplifier::setVolume(int level)
{
    std::cout << mDescription << " setting volume to " << level << ".\n";
}

void Amplifier::setTuner(Tuner *tuner)
{
    std::cout << mDescription << " setting tuner to " << *tuner << ".\n";
    mTuner = tuner;
}

void Amplifier::setDvd(DvdPlayer *dvd)
{
    std::cout << mDescription << " setting DVD player to " << *dvd << ".\n";
    mDvd = dvd;
}

void Amplifier::setCd(CdPlayer *cd)
{
    std::cout << mDescription << " setting CD player to " << *dvd << ".\n";
}