#include "ChocolateBoiler.h"


ChocolateBoiler::ChocolateBoiler()
        : mEmpty(true)
        , mBoiled(false)
{}

ChocolateBoiler::~ChocolateBoiler() {}

ChocolateBoiler& ChocolateBoiler::getInstance()
{
    // works for multithreaded applications
    static ChocolateBoiler chocolateBoiler;
    return chocolateBoiler;
}

void ChocolateBoiler::boil()
{
    if (!isEmpty() && !isBoiled())
        mBoiled = true;
}

void ChocolateBoiler::fill()
{
    if (isEmpty())
    {
        mEmpty = false;
        mBoiled = false;
    }
}

void ChocolateBoiler::drain()
{
    if (!isEmpty() && isBoiled())
        mEmpty = true;
}

bool ChocolateBoiler::isEmpty() const
{
    return mEmpty;
}

bool ChocolateBoiler::isBoiled() const
{
    return mBoiled;
}
