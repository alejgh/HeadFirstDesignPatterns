#include "WeatherData.h"

WeatherData::WeatherData()
        : Subject()
        , mTemperature()
        , mHumidity()
        , mPressure()
{}

void WeatherData::measurementsChanged()
{
    setChanged();
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    mTemperature = temperature;
    mHumidity = humidity;
    mPressure = pressure;
    measurementsChanged();
}

float WeatherData::getTemperature() const
{
    return mTemperature;
}

float WeatherData::getHumidity() const
{
    return mHumidity;
}

float WeatherData::getPressure() const
{
    return mPressure;
}
