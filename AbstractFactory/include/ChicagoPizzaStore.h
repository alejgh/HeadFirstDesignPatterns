#ifndef HEADFIRSTDESIGNPATTERNS_CHICAGOPIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_CHICAGOPIZZASTORE_H

#include "PizzaStore.h"

class ChicagoPizzaStore : public PizzaStore
{
public:
    virtual std::unique_ptr<Pizza> createPizza(PizzaType type) override;

};


#endif //HEADFIRSTDESIGNPATTERNS_CHICAGOPIZZASTORE_H
