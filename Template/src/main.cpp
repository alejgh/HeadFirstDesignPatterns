#include "CaffeineBeverage.h"
#include "Tea.h"
#include "Coffee.h"

#include <iostream>


int main()
{
    CaffeineBeverage* tea = new Tea();
    CaffeineBeverage* coffee = new Coffee();

    std::cout << "\nMaking tea...\n";
    tea->prepareRecipe();

    std::cout << "\nMaking coffee...\n";
    coffee->prepareRecipe();


    delete tea;
    delete coffee;

    return 0;
}