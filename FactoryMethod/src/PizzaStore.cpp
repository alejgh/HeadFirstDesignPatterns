#include "PizzaStore.h"

std::unique_ptr<Pizza> PizzaStore::orderPizza(PizzaType type)
{
    std::unique_ptr<Pizza> pizza = createPizza(type);

    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}
