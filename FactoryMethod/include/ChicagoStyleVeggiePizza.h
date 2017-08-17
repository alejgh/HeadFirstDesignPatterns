#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEVEGGIEPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEVEGGIEPIZZA_H

#include "Pizza.h"


class ChicagoStyleVeggiePizza : public Pizza
{
public:
    ChicagoStyleVeggiePizza();

    virtual void cut() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEVEGGIEPIZZA_H
