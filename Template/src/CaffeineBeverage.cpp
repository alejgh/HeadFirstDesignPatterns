#include "CaffeineBeverage.h"

#include <iostream>


CaffeineBeverage::CaffeineBeverage() {}

CaffeineBeverage::~CaffeineBeverage() {}

void CaffeineBeverage::prepareRecipe()
{
    boilWater();
    brew();
    pourInCup();
    if (customerWantsCondiments())
        addCondiments();
}


void CaffeineBeverage::boilWater()
{
    std::cout << "Boiling water.\n";
}

void CaffeineBeverage::pourInCup()
{
    std::cout << "Pouring into cup.\n";
}

bool CaffeineBeverage::customerWantsCondiments()
{
    // hook method. by default we return true, subclasses
    // can provide their own implementation or leave it
    // as it is
    return true;
}