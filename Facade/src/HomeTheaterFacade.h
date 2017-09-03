#ifndef HEADFIRSTDESIGNPATTERNS_HOMETHEATERFACADE_H
#define HEADFIRSTDESIGNPATTERNS_HOMETHEATERFACADE_H

class Amplifier;
class Tuner;
class DvdPlayer;
class CdPlayer;
class Projector;
class TheaterLights;
class Screen;
class PopcornPopper;

class HomeTheaterFacade
{
private:
    Amplifier* mAmp;
    Tuner* mTuner;
    DvdPlayer* mDvd;
    CdPlayer* mCd;
    Projector* mProjector;
    TheaterLights* mLights;
    Screen* mScreen;
    PopcornPopper* mPopper;

public:
    HomeTheaterFacade(Amplifier* amplifier, Tuner* tuner, DvdPlayer* dvd
            , CdPlayer* cd, Projector* projector, TheaterLights* lights
            , Screen* screen, PopcornPopper* popper);

public:
    void watchMovie();
    void endMovie();
    void listenToCd(const std::string& cdTitle);
    void endCd();
    void listenToRadio(double frequency);
    void endRadio();

};


#endif //HEADFIRSTDESIGNPATTERNS_HOMETHEATERFACADE_H
