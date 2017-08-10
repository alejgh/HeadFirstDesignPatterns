#ifndef HEADFIRSTDESIGNPATTERNS_STATISTICSDISPLAY_H
#define HEADFIRSTDESIGNPATTERNS_STATISTICSDISPLAY_H

#include "IObserver.h"
#include "IDisplayElement.h"



class StatisticsDisplay : public IObserver, public IDisplayElement
{
private:
    Subject& mWeatherData;
    float mMaxTemp;
    float mMinTemp;
    float mTempSum;
    int mNumReadings;

public:
    StatisticsDisplay(Subject& weatherData);

public:
    virtual void update(float temp, float humidity, float pressure) override;
    virtual void display() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_STATISTICSDISPLAY_H
