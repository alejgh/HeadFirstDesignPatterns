#ifndef HEADFIRSTDESIGNPATTERNS_CEILINGFAN_H
#define HEADFIRSTDESIGNPATTERNS_CEILINGFAN_H

#include <string>

enum class FanLevel
{
    OFF,
    LOW,
    MEDIUM,
    HIGH
};

class CeilingFan
{
private:
    std::string mLocation;
    FanLevel mLevel;

public:
    CeilingFan(const std::string& location);

public:
    void high();
    void medium();
    void low();
    void off();
    FanLevel getSpeed() const;

};


#endif //HEADFIRSTDESIGNPATTERNS_CEILINGFAN_H
