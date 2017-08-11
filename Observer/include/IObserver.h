#ifndef HEADFIRSTDESIGNPATTERNS_IOBSERVER_H
#define HEADFIRSTDESIGNPATTERNS_IOBSERVER_H

class Subject;

class IObserver
{
public:
    virtual void update(const Subject& subject) = 0;
};

#endif //HEADFIRSTDESIGNPATTERNS_IOBSERVER_H
