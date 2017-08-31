#ifndef HEADFIRSTDESIGNPATTERNS_TURKEYADAPTER_H
#define HEADFIRSTDESIGNPATTERNS_TURKEYADAPTER_H

#include "IDuck.h"
#include "ITurkey.h"

class TurkeyAdapter : public IDuck
{
private:
    ITurkey* mTurkey;

public:
    TurkeyAdapter(ITurkey* turkey);
    ~TurkeyAdapter();

public:
    virtual void fly() override;
    virtual void quack() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_TURKEYADAPTER_H
