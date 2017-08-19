#include "Veggies.h"


std::ostream& operator<<(std::ostream& os, const Veggies& veggies)
{
    return veggies.print(os);
}