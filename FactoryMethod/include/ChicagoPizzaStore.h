#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEPIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEPIZZASTORE_H

#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
private:
    virtual std::unique_ptr<Pizza> createPizza(PizzaType type) override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOSTYLEPIZZASTORE_H
