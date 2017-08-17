#include "ChicagoStyleClamPizza.h"

#include <iostream>


ChicagoStyleClamPizza::ChicagoStyleClamPizza()
        : Pizza("Chicago Style Clam Pizza",
                "Extra Thick Crust Dough",
                "Plum Tomato Sauce")
{
    mToppings.push_back("Shreeded Mozzarella Cheese");
    mToppings.push_back("Frozen Clams from Chesapeake Bay");
}

void ChicagoStyleClamPizza::cut()
{
    std::cout << "Cutting the pizza into square slices.\n";
}