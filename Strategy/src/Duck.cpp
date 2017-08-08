#include "Duck.h"

#include <iostream>

Duck::Duck(IFlyBehavior* flyBehavior, IQuackBehavior* quackBehavior)
        : mFlyBehavior(flyBehavior)
        , mQuackBehavior(quackBehavior)
{
}

void Duck::performFly()
{
    mFlyBehavior->fly();
}

void Duck::performQuack()
{
    mQuackBehavior->quack();
}

void Duck::swim()
{
    std::cout << "All ducks float, even decoys." << std::endl;
}

void Duck::setFlyBehavior(IFlyBehaviorPtr newFlyBehaviour)
{
    mFlyBehavior.reset();
    mFlyBehavior = std::move(newFlyBehaviour);
}

void Duck::setQuackBehavior(IQuackBehaviorPtr newQuackBehavior)
{
    mQuackBehavior.reset();
    mQuackBehavior = std::move(newQuackBehavior);
}