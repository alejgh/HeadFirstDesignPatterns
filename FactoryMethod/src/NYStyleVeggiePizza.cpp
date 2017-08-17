#include "NYStyleVeggiePizza.h"

NYStyleVeggiePizza::NYStyleVeggiePizza()
        : Pizza("NY Style Pepperoni Pizza",
                "Thin Crust Dough",
                "Marinara Sauce")
{
    mToppings.push_back("Grated Reggiano Cheese");
    mToppings.push_back("Garlic");
    mToppings.push_back("Onion");
    mToppings.push_back("Mushrooms");
    mToppings.push_back("Red Pepper");
}