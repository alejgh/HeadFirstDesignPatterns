#include "ForecastDisplay.h"
#include "Subject.h"
#include "WeatherData.h"

#include <iostream>

ForecastDisplay::ForecastDisplay(Subject &weatherData)
        : IObserver()
        , IDisplayElement()
        , mCurrentPressure(29.92f)
        , mPreviousPressure()
{
    weatherData.registerObserver(this);
}

void ForecastDisplay::update(const Subject& subject)
{
    const WeatherData *weatherData;

    if ((weatherData = dynamic_cast<const WeatherData *>(&subject)) != nullptr)
    {
        mPreviousPressure = mCurrentPressure;
        mCurrentPressure = weatherData->getPressure();
        display();
    }
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