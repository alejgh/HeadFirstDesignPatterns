#ifndef HEADFIRSTDESIGNPATTERNS_DVDPLAYER_H
#define HEADFIRSTDESIGNPATTERNS_DVDPLAYER_H

#include <string>

class Amplifier;

class DvdPlayer
{
private:
    std::string mDescription;
    Amplifier& mAmplifier;
    int mCurrentTrack;
    std::string mMovie;

public:
    DvdPlayer(const std::string& description, Amplifier& amplifier);

public:
    void on();
    void off();
    void eject();

    void play(const std::string& movie);
    void play(int track);

    void stop();
    void pause();

    void setTwoChannelAudio();
    void setSurroundAudio();

};


#endif //HEADFIRSTDESIGNPATTERNS_DVDPLAYER_H
