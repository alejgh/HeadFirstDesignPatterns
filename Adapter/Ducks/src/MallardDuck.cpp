#include "../include/MallardDuck.h"

#include <iostream>


MallardDuck::MallardDuck() : IDuck() {}

MallardDuck::~MallardDuck() {}

void MallardDuck::quack()
{
    std::cout << "Quack\n";
}

void MallardDuck::fly()
{
    std::cout << "I'm flying.\n";
}
