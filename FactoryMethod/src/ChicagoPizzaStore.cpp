#include "ChicagoPizzaStore.h"
#include "ChicagoStyleCheesePizza.h"
#include "ChicagoStyleClamPizza.h"
#include "ChicagoStylePepperoniPizza.h"
#include "ChicagoStyleVeggiePizza.h"


std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(PizzaType type)
{
    std::unique_ptr<Pizza> pizza;
    switch (type)
    {
        case PizzaType::CHEESE:
            pizza = std::unique_ptr<Pizza>(new ChicagoStyleCheesePizza());
            break;
        case PizzaType::PEPPERONI:
            pizza = std::unique_ptr<Pizza>(new ChicagoStylePepperoniPizza());
            break;
        case PizzaType::CLAM:
            pizza = std::unique_ptr<Pizza>(new ChicagoStyleClamPizza());
            break;
        case PizzaType::VEGGIE:
            pizza = std::unique_ptr<Pizza>(new ChicagoStyleVeggiePizza());
            break;
        default:
            break;
    }

    return pizza;
}
