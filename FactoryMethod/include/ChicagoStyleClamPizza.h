#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECLAMPIZZA_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECLAMPIZZA_H

#include "Pizza.h"


class ChicagoStyleClamPizza : public Pizza
{
public:
    ChicagoStyleClamPizza();

    virtual void cut() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLECLAMPIZZA_H
