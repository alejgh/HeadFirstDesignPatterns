#ifndef HEADFIRSTDESIGNPATTERNS_ISTRATEGY_H
#define HEADFIRSTDESIGNPATTERNS_ISTRATEGY_H

#include "IObserver.h"
#include <vector>

class Subject
{
private:
    std::vector<IObserver*> mObservers;
    bool mChanged;

protected:
    Subject();
    virtual ~Subject();

public:
    void registerObserver(IObserver* observer);
    void removeObserver(IObserver* observer);
    void notifyObservers();

    void setChanged();
    void clearChanged();
    bool hasChanged() const;


};

#endif //HEADFIRSTDESIGNPATTERNS_ISTRATEGY_H
