#include "ModelDuck.h"

#include "FlyNoWay.h"
#include "Quack.h"

#include <iostream>


ModelDuck::ModelDuck()
        : Duck(new FlyNoWay(), new Quack())
{
}

void ModelDuck::display()
{
    std::cout << "I'm a model duck" << std::endl;
}
