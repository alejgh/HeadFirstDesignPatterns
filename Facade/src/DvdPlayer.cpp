#include "../include/DvdPlayer.h"

#include <iostream>


DvdPlayer::DvdPlayer(const std::string &description, Amplifier &amplifier)
        : mDescription(description)
        , mAmplifier(amplifier)
        , mCurrentTrack()
        , mMovie()
{
}

void DvdPlayer::on()
{
    std::cout << mDescription << " on.\n";
}

void DvdPlayer::off()
{
    std::cout << mDescription << " off.\n";
}

void DvdPlayer::eject()
{
    mMovie = "";
    std::cout << mDescription << " eject.\n";
}

void DvdPlayer::play(const std::string& movie)
{
    mMovie = movie;
    mCurrentTrack = 0;
    std::cout << mDescription << " playing \"" << mMovie << "\"." << std::endl;
}

void DvdPlayer::play(int track)
{
    if (mMovie == "")
        std::cout << mDescription << " can't play track " << track << ": no dvd inserted.\n";
    else
    {
        mCurrentTrack = track;
        std::cout << mDescription << " playing track " << mCurrentTrack << " of \""
                  << mMovie << "\"." << std::endl;
    }
}

void DvdPlayer::stop()
{
    mCurrentTrack = 0;
    std::cout << mDescription << " stopped \"" << mMovie << "\"." << std::endl;
}

void DvdPlayer::pause()
{
    std::cout << mDescription << " paused \"" << mMovie << "\"." << std::endl;
}

void DvdPlayer::setTwoChannelAudio()
{
    std::cout << mDescription << " set two channel audio.\n";
}

void DvdPlayer::setSurroundAudio()
{
    std::cout << mDescription << " set surround audio.\n";
}