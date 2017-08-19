#include "Dough.h"


std::ostream& operator<<(std::ostream& os, const Dough& dough)
{
    return dough.print(os);
}
