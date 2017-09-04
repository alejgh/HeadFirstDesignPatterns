#ifndef HEADFIRSTDESIGNPATTERNS_TUNER_H
#define HEADFIRSTDESIGNPATTERNS_TUNER_H

#include <string>

class Amplifier;

class Tuner
{
private:
    std::string mDescription;
    Amplifier& mAmplifier;
    double mFrequency;

public:
    Tuner(const std::string& description, Amplifier& amplifier);

public:
    void on();
    void off();
    void setFrequency(double newFrequency);
    void setAm();
    void setFm();

};


#endif //HEADFIRSTDESIGNPATTERNS_TUNER_H
