#include "StatisticsDisplay.h"
#include "Subject.h"

#include <iostream>
#include <limits>

StatisticsDisplay::StatisticsDisplay(Subject &weatherData)
        : IObserver()
        , IDisplayElement()
        , mWeatherData(weatherData)
        , mMaxTemp(std::numeric_limits<float>::min())
        , mMinTemp(std::numeric_limits<float>::max())
        , mTempSum(0.f)
        , mNumReadings(0)
{
    mWeatherData.registerObserver(this);
}


void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
    mTempSum += temp;
    mNumReadings++;

    if(temp > mMaxTemp)
        mMaxTemp = temp;

    if(temp < mMinTemp)
        mMinTemp = temp;

    display();
}

void StatisticsDisplay::display()
{
    std::cout << "Avg: " << mTempSum / mNumReadings << "F - Max: "
              << mMaxTemp << "F - Min: " << mMinTemp << "F." << std::endl;
}