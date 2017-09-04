#include "HomeTheaterFacade.h"
#include "Amplifier.h"
#include "Tuner.h"
#include "DvdPlayer.h"
#include "CdPlayer.h"
#include "Projector.h"
#include "TheaterLights.h"
#include "Screen.h"
#include "PopcornPopper.h"

#include <iostream>


HomeTheaterFacade::HomeTheaterFacade(Amplifier *amplifier, Tuner *tuner, DvdPlayer *dvd, CdPlayer *cd,
                                     Projector *projector, TheaterLights *lights, Screen *screen,
                                     PopcornPopper *popper)
        : mAmp(amplifier)
        , mTuner(tuner)
        , mDvd(dvd)
        , mCd(cd)
        , mProjector(projector)
        , mLights(lights)
        , mScreen(screen)
        , mPopper(popper)
{
}

void HomeTheaterFacade::watchMovie(const std::string& movie)
{
    std::cout << "Get ready to watch a movie...\n";
    mPopper->on();
    mPopper->pop();
    mLights->dim(10);
    mScreen->down();
    mProjector->on();
    mProjector->wideScreenMode();
    mAmp->on();
    mAmp->setDvd(mDvd);
    mAmp->setSurroundSound();
    mAmp->setVolume(5);
    mDvd->on();
    mDvd->play(movie);
}

void HomeTheaterFacade::endMovie()
{
    std::cout << "Shutting movie theater down...\n";
    mPopper->off();
    mLights->on();
    mScreen->up();
    mProjector->off();
    mAmp->off();
    mDvd->stop();
    mDvd->eject();
    mDvd->off();
}

void HomeTheaterFacade::listenToCd(const std::string &cdTitle)
{
    std::cout << "Get ready for an audiopile experience...\n";
    mLights->on();
    mAmp->on();
    mAmp->setVolume(5);
    mAmp->setCd(mCd);
    mAmp->setStereoSound();
    mCd->on();
    mCd->play(cdTitle);
}

void HomeTheaterFacade::endCd()
{
    std::cout << "Shutting down CD...\n";
    mAmp->off();
    mAmp->setCd(mCd);
    mCd->eject();
    mCd->off();
}

void HomeTheaterFacade::listenToRadio(double frequency)
{
    std::cout << "Tuning in the airwaves...\n";
    mTuner->on();
    mTuner->setFrequency(frequency);
    mAmp->on();
    mAmp->setVolume(5);
    mAmp->setTuner(mTuner);
}

void HomeTheaterFacade::endRadio()
{
    std::cout << "Shutting down the tuner...\n";
    mTuner->off();
    mAmp->off();
}