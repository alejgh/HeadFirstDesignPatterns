#include "ForecastDisplay.h"
#include "Subject.h"

#include <iostream>

ForecastDisplay::ForecastDisplay(Subject &weatherData)
        : IObserver()
        , IDisplayElement()
        , mWeatherData(weatherData)
        , mCurrentPressure(29.92f)
        , mPreviousPressure()
{
    mWeatherData.registerObserver(this);
}

void ForecastDisplay::update(float temperature, float humidity, float pressure)
{
    mPreviousPressure = mCurrentPressure;
    mCurrentPressure = pressure;
    display();
}

void ForecastDisplay::display()
{
    std::cout << "Forecast:" << std::endl;
    if (mCurrentPressure > mPreviousPressure)
        std::cout << "Improving weather on the way!" << std::endl;
    else if (mCurrentPressure == mPreviousPressure)
        std::cout << "More of the same." << std::endl;
    else
        std::cout << "Watch out for cooler, rainy weather." << std::endl;
}