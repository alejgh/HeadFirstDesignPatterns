#ifndef HEADFIRSTDESIGNPATTERNS_ISTRATEGY_H
#define HEADFIRSTDESIGNPATTERNS_ISTRATEGY_H

#include "IObserver.h"
#include <vector>

class Subject
{
protected:
    std::vector<IObserver*> mObservers;

protected:
    Subject();

public:
    virtual void registerObserver(IObserver* observer);
    virtual void removeObserver(IObserver* observer);
    virtual void notifyObservers() = 0;

};

#endif //HEADFIRSTDESIGNPATTERNS_ISTRATEGY_H
