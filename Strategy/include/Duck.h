#ifndef HEADFIRSTDESIGNPATTERNS_DUCK_H
#define HEADFIRSTDESIGNPATTERNS_DUCK_H

#include "IFlyBehavior.h"
#include "IQuackBehavior.h"

#include <memory>


class Duck
{
public:
    using IFlyBehaviorPtr = std::unique_ptr<IFlyBehavior>;
    using IQuackBehaviorPtr = std::unique_ptr<IQuackBehavior>;

protected:
    IFlyBehaviorPtr mFlyBehavior;
    IQuackBehaviorPtr mQuackBehavior;

protected:
    Duck(IFlyBehavior* flyBehavior, IQuackBehavior* quackBehavior);
    Duck(const Duck& rhsDuck);

public:
    virtual void display() = 0;
    void performFly();
    void performQuack();
    void swim();

    void setFlyBehavior(IFlyBehaviorPtr newFlyBehaviour);
    void setQuackBehavior(IQuackBehaviorPtr newQuackBehavior);
};

#endif //HEADFIRSTDESIGNPATTERNS_DUCK_H
