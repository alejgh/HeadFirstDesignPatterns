#include "Subject.h"

Subject::Subject()
        : mObservers()
        , mChanged(false)
{
}

Subject::~Subject() {}

void Subject::registerObserver(IObserver *observer)
{
    mObservers.push_back(observer);
}

void Subject::removeObserver(IObserver *observer)
{
    mObservers.erase(std::find(mObservers.begin(), mObservers.end(), observer));
}

void Subject::notifyObservers()
{
    if (mChanged)
    {
        for (auto observerPtr : mObservers)
            observerPtr->update(*this);
    }

    mChanged = false;
}

void Subject::setChanged()
{
    mChanged = true;
}

bool Subject::hasChanged() const
{
    return mChanged;
}

void Subject::clearChanged()
{
    mChanged = false;
}

