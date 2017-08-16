#include "ChicagoPizzaStore.h"

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(PizzaType type)
{
    switch (type)
    {
        case PizzaType::CHEESE:
            return std::unique_ptr(ChicagoStyleCheesePizza());
        case PizzaType::PEPPERONI:
            return std::unique_ptr(ChicagoStylePepperoniPizza());
        case PizzaType::CLAM:
            return std::unique_ptr(ChicagoStyleClamPizza());
        case PizzaType::VEGGIE:
            return std::unique_ptr(ChicagoStyleVeggiePizza());
        default:
            return std::unique_ptr();
    }
}
