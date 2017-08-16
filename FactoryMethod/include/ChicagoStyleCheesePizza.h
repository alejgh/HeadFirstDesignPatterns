#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECHEESEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECHEESEPIZZA_H

#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza();

public:
    virtual void cut() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECHEESEPIZZA_H
