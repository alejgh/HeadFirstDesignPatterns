#ifndef HEADFIRSTDESIGNPATTERNS_CURRENTCONDITIONSDISPLAY_H
#define HEADFIRSTDESIGNPATTERNS_CURRENTCONDITIONSDISPLAY_H

#include "IObserver.h"
#include "IDisplayElement.h"

class Subject;

class CurrentConditionsDisplay : public IObserver, public IDisplayElement
{
private:
    Subject& mWeatherData;
    float mTemperature;
    float mHumidity;

public:
    CurrentConditionsDisplay(Subject& weatherData);

public:
    virtual void update(float temperature, float humidity, float pressure) override;
    virtual void display() override;
};


#endif //HEADFIRSTDESIGNPATTERNS_CURRENTCONDITIONSDISPLAY_H
