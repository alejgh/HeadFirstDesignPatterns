#ifndef HEADFIRSTDESIGNPATTERNS_NYPIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_NYPIZZASTORE_H

#include "PizzaStore.h"


class NYPizzaStore : public PizzaStore
{
private:
    virtual std::unique_ptr<Pizza> createPizza(PizzaType type) override;

};


#endif //HEADFIRSTDESIGNPATTERNS_NYPIZZASTORE_H
