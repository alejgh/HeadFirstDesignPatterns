#include "NYPizzaStore.h"
#include "NYStyleCheesePizza.h"
#include "NYStyleClamPizza.h"
#include "NYStylePepperoniPizza.h"
#include "NYStyleVeggiePizza.h"


std::unique_ptr<Pizza> NYPizzaStore::createPizza(PizzaType type)
{
    std::unique_ptr<Pizza> pizza;
    switch (type)
    {
        case PizzaType::CHEESE:
            pizza = std::unique_ptr<Pizza>(new NYStyleCheesePizza());
            break;
        case PizzaType::PEPPERONI:
            pizza = std::unique_ptr<Pizza>(new NYStylePepperoniPizza());
            break;
        case PizzaType::CLAM:
            pizza = std::unique_ptr<Pizza>(new NYStyleClamPizza());
            break;
        case PizzaType::VEGGIE:
            pizza = std::unique_ptr<Pizza>(new NYStyleVeggiePizza());
            break;
        default:
             break;
    }

    return pizza;
}