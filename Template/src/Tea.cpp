#include "Tea.h"

#include <iostream>


void Tea::brew()
{
    std::cout << "Steeping the tea.\n";
}

void Tea::addCondiments()
{
    std::cout << "Adding Lemon.\n";
}

// we override the hook to provide a different implementation
//  when we prepare a tea
bool Tea::customerWantsCondiments()
{
    char answer = '\0';
    std::string input = "";

    do
    {
        std::cout << "Do you want lemon with your tea? (y/n) ";
        std::getline(std::cin, input);

        if(input.length() == 1)
            answer = input[0];

    } while(answer != 'y' && answer != 'n');

    return answer == 'y' ? true : false;
}