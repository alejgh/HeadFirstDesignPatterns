#include "Subject.h"

Subject::Subject()
        : mObservers()
{}

void Subject::registerObserver(IObserver *observer)
{
    mObservers.push_back(observer);
}

void Subject::removeObserver(IObserver *observer)
{
    mObservers.erase(std::find(mObservers.begin(), mObservers.end(), observer));
}

