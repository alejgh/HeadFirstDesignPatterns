#ifndef HEADFIRSTDESIGNPATTERNS_PROJECTOR_H
#define HEADFIRSTDESIGNPATTERNS_PROJECTOR_H

#include "DvdPlayer.h"
#include <string>

class Projector
{
private:
    std::string mDescription;
    DvdPlayer& mDvdPlayer;

public:
    Projector(const std::string& description, DvdPlayer& dvdPlayer);

public:
    void on();
    void off();

    void wideScreenMode();
    void tvMode();

};


#endif //HEADFIRSTDESIGNPATTERNS_PROJECTOR_H
