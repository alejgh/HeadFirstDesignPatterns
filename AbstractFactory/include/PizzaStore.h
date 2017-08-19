#ifndef HEADFIRSTDESIGNPATTERNS_PIZZASTORE_H
#define HEADFIRSTDESIGNPATTERNS_PIZZASTORE_H

#include "Pizza.h"
#include "PizzaTypes.h"

#include <memory>
#include <string>

class PizzaStore
{
public:
    std::unique_ptr<Pizza> orderPizza(PizzaType type);

protected:
    virtual std::unique_ptr<Pizza> createPizza(PizzaType type) = 0;

};


#endif //HEADFIRSTDESIGNPATTERNS_PIZZASTORE_H
