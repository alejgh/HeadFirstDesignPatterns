#ifndef HEADFIRSTDESIGNPATTERNS_STEREO_H
#define HEADFIRSTDESIGNPATTERNS_STEREO_H

#include <string>

class Stereo
{
private:
    std::string mLocation;

public:
    Stereo(const std::string& location);

public:
    void on();
    void off();
    void setCD();
    void setDvd();
    void setRadio();
    void setVolume(int volume);

};


#endif //HEADFIRSTDESIGNPATTERNS_STEREO_H
