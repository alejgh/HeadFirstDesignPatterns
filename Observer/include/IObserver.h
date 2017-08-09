#ifndef HEADFIRSTDESIGNPATTERNS_IOBSERVER_H
#define HEADFIRSTDESIGNPATTERNS_IOBSERVER_H

class Subject;

class IObserver
{
public:
    virtual void update(float temperature, float humidity, float pressure) = 0;
};

#endif //HEADFIRSTDESIGNPATTERNS_IOBSERVER_H
