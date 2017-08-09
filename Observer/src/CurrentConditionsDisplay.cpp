#include "CurrentConditionsDisplay.h"
#include "Subject.h"

#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& weatherData)
        : IObserver()
        , IDisplayElement()
        , mWeatherData(weatherData)
        , mTemperature()
        , mHumidity()
{
    weatherData.registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure)
{
    mTemperature = temperature;
    mHumidity = humidity;
    display();
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Current conditions: " << mTemperature << "F degrees and "
              << mHumidity << "% humidity." << std::endl;
}