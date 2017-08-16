#include "NYPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main()
{
    std::unique_ptr<PizzaStore> nyPizzaStore(new NYPizzaStore());
    nyPizzaStore->orderPizza(PizzaType::CHEESE);
}