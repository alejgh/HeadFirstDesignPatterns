#ifndef HEADFIRSTDESIGNPATTERNS_FORECASTDISPLAY_H
#define HEADFIRSTDESIGNPATTERNS_FORECASTDISPLAY_H

#include "IObserver.h"
#include "IDisplayElement.h"

class Subject;

class ForecastDisplay : public IObserver, public IDisplayElement
{
private:
    float mCurrentPressure;
    float mPreviousPressure;

public:
    ForecastDisplay(Subject& weatherData);

public:
    virtual void update(const Subject& subject) override;
    virtual void display() override;
};


#endif //HEADFIRSTDESIGNPATTERNS_FORECASTDISPLAY_H
