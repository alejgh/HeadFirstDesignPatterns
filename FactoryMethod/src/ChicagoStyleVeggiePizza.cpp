#include "ChicagoStyleVeggiePizza.h"

#include <iostream>


ChicagoStyleVeggiePizza::ChicagoStyleVeggiePizza()
        : Pizza("Chicago Deep Dish Veggie Pizza",
                "Extra Thick Crust Dough",
                "Plum Tomato Sauce")
{
    mToppings.push_back("Sgredded Mozzarella Cheese");
    mToppings.push_back("Black Olives");
    mToppings.push_back("Spinach");
    mToppings.push_back("Eggplant");
}

void ChicagoStyleVeggiePizza::cut()
{
    std::cout << "Cutting the pizza into square slices.\n";
}