#include "MallardDuck.h"

#include "Quack.h"
#include "FlyWithWings.h"

#include <iostream>


MallardDuck::MallardDuck()
        : Duck(new FlyWithWings(), new Quack())
{
}

void MallardDuck::display()
{
    std::cout << "I'm a real Mallard duck." << std::endl;
}