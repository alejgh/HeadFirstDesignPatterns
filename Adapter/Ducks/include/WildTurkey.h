#ifndef HEADFIRSTDESIGNPATTERNS_WILDTURKEY_H
#define HEADFIRSTDESIGNPATTERNS_WILDTURKEY_H

#include "ITurkey.h"

class WildTurkey : public ITurkey
{
public:
    WildTurkey();

public:
    virtual void gobble() override;
    virtual void fly() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_WILDTURKEY_H
