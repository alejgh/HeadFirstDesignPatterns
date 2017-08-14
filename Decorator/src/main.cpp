#include "Espresso.h"
#include "DarkRoast.h"
#include "HouseBlend.h"

#include "Mocha.h"
#include "Whip.h"
#include "Soy.h"

#include <iostream>

int main()
{
    Beverage* beverage = new Espresso();
    std::cout << beverage->getDescription() << " $" << beverage->cost() << std::endl;

    Beverage* beverage2 = new DarkRoast(Beverage::Size::BIG);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Soy(beverage2);
    std::cout << beverage2->getDescription() << " $" << beverage2->cost() << std::endl;

    Beverage* anotherBeverage2 = new Soy(new Mocha(new Mocha(new DarkRoast)));
    std::cout << anotherBeverage2->getDescription() << " $" << anotherBeverage2->cost() << std::endl;

    Beverage* beverage3 = new HouseBlend();
    beverage3 = new Mocha(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    std::cout << beverage3->getDescription() << " $" << beverage3->cost() << std::endl;

    delete beverage;
    delete beverage2;
    delete anotherBeverage2;
    delete beverage3;

    return 0;
}