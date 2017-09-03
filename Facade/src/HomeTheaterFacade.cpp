#include "HomeTheaterFacade.h"

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

void HomeTheaterFacade::watchMovie()
{

}