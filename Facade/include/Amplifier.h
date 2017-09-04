#ifndef HEADFIRSTDESIGNPATTERNS_AMPLIFIER_H
#define HEADFIRSTDESIGNPATTERNS_AMPLIFIER_H

#include <string>

class Tuner;
class DvdPlayer;
class Tuner;
class CdPlayer;

class Amplifier
{
private:
    std::string mDescription;
    Tuner* mTuner;
    DvdPlayer* mDvd;
    CdPlayer* mCd;

public:
    Amplifier(const std::string& description);

public:
    void on();
    void off();

    void setStereoSound();
    void setSurroundSound();

    void setVolume(int level);
    void setTuner(Tuner* tuner);
    void setDvd(DvdPlayer* dvd);
    void setCd(CdPlayer* cd);

};


#endif //HEADFIRSTDESIGNPATTERNS_AMPLIFIER_H
