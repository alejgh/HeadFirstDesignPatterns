#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include "MallardDuck.h"

#include <iostream>


void testDuck(IDuck& duck)
{
    duck.quack();
    duck.fly();
}

int main()
{
    IDuck* duck = new MallardDuck();
    ITurkey* turkey = new WildTurkey();
    IDuck* turkeyAdapter = new TurkeyAdapter(turkey);

    std::cout << "The turkey says...\n";
    turkey->gobble();
    turkey->fly();

    std::cout << "\nThe duck says...\n";
    testDuck(*duck);


    std::cout << "\nThe turkey adapter says...\n";
    testDuck(*turkeyAdapter);

    delete duck;
    delete turkey;
    delete turkeyAdapter;

    return 0;
}