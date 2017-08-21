#include "PizzaStore.h"
#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include "Pizza.h"
#include "PizzaTypes.h"

#include <iostream>

void printPizza(const std::string& customer, Pizza* pizza)
{
    std::cout << customer << " ordered a " << *pizza << "\n\n\n";
}

int main()
{
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    std::unique_ptr<Pizza> pizza = nyStore->orderPizza(PizzaType::CHEESE);
    printPizza("Ethan", pizza.get());

    pizza.release();
    pizza = chicagoStore->orderPizza(PizzaType::CHEESE);
    printPizza("Joel", pizza.get());

    pizza.release();
    pizza = nyStore->orderPizza(PizzaType::CLAM);
    printPizza("Ethan", pizza.get());

    pizza.release();
    pizza = chicagoStore->orderPizza(PizzaType::CLAM);
    printPizza("Joel", pizza.get());

    pizza.release();
    pizza = nyStore->orderPizza(PizzaType::PEPPERONI);
    printPizza("Ethan", pizza.get());

    pizza.release();
    pizza = chicagoStore->orderPizza(PizzaType::PEPPERONI);
    printPizza("Joel", pizza.get());

    pizza.release();
    pizza = nyStore->orderPizza(PizzaType::VEGGIE);
    printPizza("Ethan", pizza.get());

    pizza.release();
    pizza = chicagoStore->orderPizza(PizzaType::VEGGIE);
    printPizza("Joel", pizza.get());

    return 0;
}