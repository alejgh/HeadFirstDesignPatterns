#include "Pepperoni.h"


std::ostream& operator<<(std::ostream& os, const Pepperoni& pepperoni)
{
    return pepperoni.print(os);
}