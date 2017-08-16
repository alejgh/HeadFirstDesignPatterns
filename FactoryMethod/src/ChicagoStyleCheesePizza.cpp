#include "ChicagoStyleCheesePizza.h"

#include <iostream>


ChicagoStyleCheesePizza::ChicagoStyleCheesePizza()
        : Pizza("Chicago Style Deep Dish Cheese Pizza",
                "Extra Thick Crust Dough",
                "Plum Tomato Sauce")
{
    mToppings.push_back("Shredded Mozzarella Cheese");
}

void ChicagoStyleCheesePizza::cut()
{
    std::cout << "Cutting the pizza into square slices.\n";
}
