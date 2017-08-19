#include "ChicagoPizzaStore.h"

#include "Pizza.h"
#include "CheesePizza.h"
#include "ClamPizza.h"
#include ""


std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(PizzaType type)
{
    std::unique_ptr<Pizza> pizza(nullptr);
    IPizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

    switch(type)
    {
        case PizzaType::CHEESE:
            pizza = std::unique_ptr(new CheesePizza(ingredientFactory));
            pizza
            break;
    }

    delete ingredientFactory;
    return pizza;
}