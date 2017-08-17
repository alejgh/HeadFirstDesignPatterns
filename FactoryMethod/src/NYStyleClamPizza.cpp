#include "NYStyleClamPizza.h"


NYStyleClamPizza::NYStyleClamPizza()
        : Pizza("NY Style Clam Pizza",
                "Thin Crust Dough",
                "Marinara Sauce")
{
    mToppings.push_back("Grated Reggiano Cheese");
    mToppings.push_back("Fresh Clams from Long Island Sound");
}