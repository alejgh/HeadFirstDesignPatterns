#include "Sauce.h"


std::ostream& operator<<(std::ostream& os, const Sauce& sauce)
{
    return sauce.print(os);
}