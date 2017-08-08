#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyNoWay.h"
#include "FlyRocketPowered.h"
#include "MuteQuack.h"

#include <memory>


void testMallardDuck();
void testModelDuck();

int main()
{
    std::cout << "Mallard duck test:" << std::endl;
    testMallardDuck();

    std::cout << "\nModel duck test:" << std::endl;
    testModelDuck();

    return 0;
}

void testMallardDuck()
{
    // default mallard duck
    std::unique_ptr<Duck> mallard(new MallardDuck());
    mallard->display();
    mallard->performQuack();
    mallard->performFly();

    // changing behaviors
    mallard->setFlyBehavior(std::unique_ptr<IFlyBehavior>(new FlyNoWay()));
    mallard->setQuackBehavior(std::unique_ptr<IQuackBehavior>(new MuteQuack()));

    // runtime modified mallard duck
    mallard->performFly();
    mallard->performQuack();
}

void testModelDuck()
{
    std::unique_ptr<Duck> model(new ModelDuck());
    model->performFly();
    model->setFlyBehavior(std::unique_ptr<IFlyBehavior>(new FlyRocketPowered()));
    model->performFly();
}