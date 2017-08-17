#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

#include <iostream>


int main()
{
    std::unique_ptr<PizzaStore> nyStore(new NYPizzaStore());
    std::unique_ptr<PizzaStore> chicagoStore(new ChicagoPizzaStore());

    std::unique_ptr<Pizza> pizza = nyStore->orderPizza(PizzaType::CHEESE);
    std::cout << "Ethan ordered a " << pizza->getName() << "\n\n\n";

    pizza.release();
    pizza = chicagoStore->orderPizza(PizzaType::CHEESE);
    std::cout << "Joel ordered a " << pizza->getName() << std::endl;

    return 0;
}