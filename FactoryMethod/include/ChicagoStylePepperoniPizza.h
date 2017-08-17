#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEPEPPERONIPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEPEPPERONIPIZZA_H

#include "Pizza.h"

class ChicagoStylePepperoniPizza : public Pizza
{
public:
    ChicagoStylePepperoniPizza();

public:
    virtual void cut() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEPEPPERONIPIZZA_H
