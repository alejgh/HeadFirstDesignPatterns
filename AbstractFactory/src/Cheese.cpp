#include "Cheese.h"


std::ostream& operator<<(std::ostream& os, const Cheese& cheese)
{
    return cheese.print(os);
}