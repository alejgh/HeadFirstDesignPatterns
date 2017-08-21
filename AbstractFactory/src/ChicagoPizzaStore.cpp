#include "ChicagoPizzaStore.h"

#include "ChicagoPizzaIngredientFactory.h"
#include "Pizza.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include "VeggiePizza.h"
#include "PepperoniPizza.h"

std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(PizzaType type)
{
    std::unique_ptr<Pizza> pizza(nullptr);
    IPizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

    switch(type)
    {
        case PizzaType::CHEESE:
            pizza = std::unique_ptr<Pizza>(new CheesePizza(*ingredientFactory));
            pizza->setName("Chicago Style Cheese Pizza");
            break;
        case PizzaType::VEGGIE:
            pizza = std::unique_ptr<Pizza>(new VeggiePizza(*ingredientFactory));
            pizza->setName("Chicago Style Veggie Pizza");
            break;
        case PizzaType::CLAM:
            pizza = std::unique_ptr<Pizza>(new ClamPizza(*ingredientFactory));
            pizza->setName("Chicago Style Clam Pizza");
            break;
        case PizzaType::PEPPERONI:
            pizza = std::unique_ptr<Pizza>(new PepperoniPizza(*ingredientFactory));
            pizza->setName("Chicago Style Pepperoni Pizza");
            break;
        default:
            break;
    }

    delete ingredientFactory;
    return pizza;
}