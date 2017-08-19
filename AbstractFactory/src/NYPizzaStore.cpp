#include "NYPizzaStore.h"

#include "Pizza.h"

std::unique_ptr<Pizza> NYPizzaStore::createPizza(PizzaType type)
{
    std::unique_ptr<Pizza> pizza(nullptr);
    IPizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();

    switch (type)
    {
        case PizzaType::CHEESE:
            pizza = std::unique_ptr(new CheesePizza(*ingredientFactory));
            pizza->setName("New York Style Cheese Pizza");
            break;
        case PizzaType::VEGGIE:
            pizza = std::unique_ptr(new VeggiePizza(*ingredientFactory));
            pizza->setName("New York Style Veggie Pizza");
            break;
        case PizzaType::CLAM:
            pizza = std::unique_ptr(new ClamPizza(*ingredientFactory));
            pizza->setName("New York Style Clam Pizza");
            break;
        case PizzaType::PEPPERONI:
            pizza = std::unique_ptr(new PepperoniPizza(*ingredientFactory));
            pizza->setName("New York Style Pepperoni Pizza");
            break;
        default:
            break;
    }

    delete ingredientFactory;
    return pizza;
}