#ifndef HEADFIRSTDESIGNPATTERNS_LIGHT_H
#define HEADFIRSTDESIGNPATTERNS_LIGHT_H

#include <string>

class Light
{
private:
    std::string mLocation;

public:
    Light(const std::string& location);

public:
    void on();
    void off();
};


#endif //HEADFIRSTDESIGNPATTERNS_LIGHT_H
