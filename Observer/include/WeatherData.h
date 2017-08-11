#ifndef HEADFIRSTDESIGNPATTERNS_WEATHERDATA_H
#define HEADFIRSTDESIGNPATTERNS_WEATHERDATA_H

#include "Subject.h"

class WeatherData : public Subject
{
private:
    float mTemperature;
    float mHumidity;
    float mPressure;

public:
    WeatherData();

public:
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);

    float getTemperature() const;
    float getHumidity() const;
    float getPressure() const;

};


#endif //HEADFIRSTDESIGNPATTERNS_WEATHERDATA_H
