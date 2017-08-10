#ifndef HEADFIRSTDESIGNPATTERNS_FORECASTDISPLAY_H
#define HEADFIRSTDESIGNPATTERNS_FORECASTDISPLAY_H

#include "IObserver.h"
#include "IDisplayElement.h"

class Subject;

class ForecastDisplay : public IObserver, public IDisplayElement
{
private:
    Subject& mWeatherData;
    float mCurrentPressure;
    float mPreviousPressure;

public:
    ForecastDisplay(Subject& weatherData);

public:
    virtual void update(float temperature, float humidity, float pressure) override;
    virtual void display() override;
};


#endif //HEADFIRSTDESIGNPATTERNS_FORECASTDISPLAY_H
