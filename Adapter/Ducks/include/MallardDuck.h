#ifndef HEADFIRSTDESIGNPATTERNS_MALLARDDUCK_H
#define HEADFIRSTDESIGNPATTERNS_MALLARDDUCK_H

#include "IDuck.h"

class MallardDuck : public IDuck
{
public:
    MallardDuck();
    ~MallardDuck();

public:
    virtual void quack() override;
    virtual void fly() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_MALLARDDUCK_H
