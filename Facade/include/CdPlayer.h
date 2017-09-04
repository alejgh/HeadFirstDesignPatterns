#ifndef HEADFIRSTDESIGNPATTERNS_CDPLAYER_H
#define HEADFIRSTDESIGNPATTERNS_CDPLAYER_H

#include <string>

class Amplifier;

class CdPlayer
{
private:
    std::string mDescription;
    Amplifier& mAmplifier;
    int mCurrentTrack;
    std::string mTitle;

public:
    CdPlayer(const std::string& description, Amplifier& amplifier);

public:
    void on();
    void off();
    void eject();

    void play(const std::string& title);
    void play(int track);

    void stop();
    void pause();

};


#endif //HEADFIRSTDESIGNPATTERNS_CDPLAYER_H
