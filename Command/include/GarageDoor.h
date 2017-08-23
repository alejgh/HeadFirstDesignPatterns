#ifndef HEADFIRSTDESIGNPATTERNS_GARAGEDOOR_H
#define HEADFIRSTDESIGNPATTERNS_GARAGEDOOR_H

#include <string>

class GarageDoor
{
private:
    std::string mLocation;

public:
    GarageDoor(const std::string& location);

public:
    void up();
    void down();
    void stop();
    void lightOn();
    void lightOff();

};


#endif //HEADFIRSTDESIGNPATTERNS_GARAGEDOOR_H
