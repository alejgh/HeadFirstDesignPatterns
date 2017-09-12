#include "Menu.h"

std::ostream& operator<<(std::ostream& os, const Menu& menu)
{
    return menu.print(os);
}