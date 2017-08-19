#include "Clams.h"


std::ostream& operator<<(std::ostream& os, const Clams& clams)
{
    return clams.print(os);
}