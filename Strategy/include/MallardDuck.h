#ifndef HEADFIRSTDESIGNPATTERNS_MALLARDDUCK_H
#define HEADFIRSTDESIGNPATTERNS_MALLARDDUCK_H

#include "Duck.h"

class MallardDuck : public Duck
{
public:
    MallardDuck();

    virtual void display() override;
};


#endif //HEADFIRSTDESIGNPATTERNS_MALLARDDUCK_H
