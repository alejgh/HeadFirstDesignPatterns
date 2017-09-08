#ifndef HEADFIRSTDESIGNPATTERNS_TEA_H
#define HEADFIRSTDESIGNPATTERNS_TEA_H

#include "CaffeineBeverage.h"

class Tea : public CaffeineBeverage
{
private:
    virtual void brew() override;
    virtual void addCondiments() override;

    virtual bool customerWantsCondiments() override; // overriding hook

};


#endif //HEADFIRSTDESIGNPATTERNS_TEA_H
