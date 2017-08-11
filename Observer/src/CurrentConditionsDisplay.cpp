#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"

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

void CurrentConditionsDisplay::update(const Subject& subject)
{
    const WeatherData *weatherData;

    if ((weatherData = dynamic_cast<const WeatherData *>(&subject)) != nullptr)
    {
        mTemperature = weatherData->getTemperature();
        mHumidity = weatherData->getHumidity();
        display();
    }
}

void CurrentConditionsDisplay::display()
{
    std::cout << "Current conditions: " << mTemperature << "F degrees and "
              << mHumidity << "% humidity." << std::endl;
}