#include "../include/CdPlayer.h"

#include <iostream>


CdPlayer::CdPlayer(const std::string &description, Amplifier &amplifier)
        : mDescription(description)
        , mAmplifier(amplifier)
        , mCurrentTrack()
        , mTitle()
{}

void CdPlayer::on()
{
    std::cout << mDescription << " on.\n";
}

void CdPlayer::off()
{
    std::cout << mDescription << " off.\n";
}

void CdPlayer::eject()
{
    mTitle = "";
    std::cout << mDescription << " eject.\n";
}

void CdPlayer::play(const std::string& title)
{
    mTitle = title;
    mCurrentTrack = 0;
    std::cout << mDescription << " playing \"" << mTitle << "\"." << std::endl;
}

void CdPlayer::play(int track)
{
    if (mTitle == "")
        std::cout << mDescription << " can't play track " << mCurrentTrack << ", no cd inserted.\n";
    else
    {
        mCurrentTrack = track;
        std::cout << mDescription << " playing track " << mCurrentTrack << ".\n";
    }
}

void CdPlayer::stop()
{
    mCurrentTrack = 0;
    std::cout << mDescription << " stopped.\n";
}

void CdPlayer::pause()
{
    std::cout << mDescription << " paused \"" << mTitle << "\"." << std::endl;
}