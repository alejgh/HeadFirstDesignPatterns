#include "NYPizzaStore.h"

std::unique_ptr<Pizza> NYPizzaStore::createPizza(PizzaType type)
{
    switch (type)
    {
        case PizzaType::CHEESE:
            return std::unique_ptr(new NYStyleCheesePizza());
        case PizzaType::PEPPERONI:
            return std::unique_ptr(new NYStylePepperoniPizza());
        case PizzaType::CLAM:
            return std::unique_ptr(new NYStyleClamPizza());
        case PizzaType::VEGGIE:
            return std::unique_ptr(new NYStyleVeggiePizza());
        default:
            return std::unique_ptr();
    }
}