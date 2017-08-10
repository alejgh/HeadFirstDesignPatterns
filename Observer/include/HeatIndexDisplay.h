#ifndef HEADFIRSTDESIGNPATTERNS_HEATINDEXDISPLAY_H
#define HEADFIRSTDESIGNPATTERNS_HEATINDEXDISPLAY_H

#include "IObserver.h"
#include "IDisplayElement.h"

class HeatIndexDisplay : public IObserver, public IDisplayElement
{
private:
    Subject& mWeatherData;
    float mHeatIndex;

public:
    HeatIndexDisplay(Subject& weatherData);

    virtual void update(float temperature, float humidity, float pressure) override;
    virtual void display() override;

private:
    float computeHeatIndex(float t, float rh);

};


#endif //HEADFIRSTDESIGNPATTERNS_HEATINDEXDISPLAY_H
