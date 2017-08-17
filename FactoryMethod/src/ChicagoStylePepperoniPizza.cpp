#include "ChicagoStylePepperoniPizza.h"

#include <iostream>


ChicagoStylePepperoniPizza::ChicagoStylePepperoniPizza()
        : Pizza("Chicago Style Pepperoni Pizza",
                "Extra Thick Crust Dough",
                "Plum Tomato Sauce")
{
    mToppings.push_back("Shredded Mozzarella Cheese");
    mToppings.push_back("Black Olives");
    mToppings.push_back("Spinach");
    mToppings.push_back("Eggplant");
    mToppings.push_back("Sliced Pepperoni");
}

void ChicagoStylePepperoniPizza::cut()
{
    std::cout << "Cutting the pizza into square slices.\n";
}
