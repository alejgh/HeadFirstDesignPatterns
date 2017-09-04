#ifndef HEADFIRSTDESIGNPATTERNS_THEATERLIGHTS_H
#define HEADFIRSTDESIGNPATTERNS_THEATERLIGHTS_H

#include <string>

class TheaterLights
{
private:
    std::string mDescription;

public:
    TheaterLights(const std::string& description);

public:
    void on();
    void off();

    void dim(int level);

};


#endif //HEADFIRSTDESIGNPATTERNS_THEATERLIGHTS_H
