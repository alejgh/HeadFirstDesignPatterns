#ifndef HEADFIRSTDESIGNPATTERNS_NYSTYLEPIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_NYSTYLEPIZZASTORE_H

#include "PizzaStore.h"

class NYPizzaStore : public PizzaStore
{
private:
    virtual std::unique_ptr<Pizza> createPizza(PizzaType type) override;

};


#endif //HEADFIRSTDESIGNPATTERNS_NYSTYLEPIZZASTORE_H
