#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(Subject &weatherData)
        : IObserver()
        , IDisplayElement()
        , mWeatherData(weatherData)
{}

void ForecastDisplay::update(float temperature, float humidity, float pressure)
{

}

void ForecastDisplay::display()
{

}