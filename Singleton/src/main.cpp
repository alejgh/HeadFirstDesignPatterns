#include "ChocolateBoiler.h"

#include <iostream>


int main()
{
    ChocolateBoiler& uniqueInstance = ChocolateBoiler::getInstance();
    ChocolateBoiler& sameUniqueInstance = ChocolateBoiler::getInstance();
    std::cout << "Is the boiler empty? " << (uniqueInstance.isEmpty() ? "Yes." : "No.")  << std::endl;

    std::cout << "Filling the boiler using another reference...\n";
    sameUniqueInstance.fill();

    std::cout << "And now, is the boiler empty? " << (uniqueInstance.isEmpty() ? "Yes." : "No.") << std::endl;

    return 0;
}