#include "../include/TurkeyAdapter.h"

TurkeyAdapter::TurkeyAdapter(ITurkey *turkey)
        : IDuck()
        , mTurkey(turkey)
{
}

TurkeyAdapter::~TurkeyAdapter()
{
}

void TurkeyAdapter::quack()
{
    mTurkey->gobble();
}

void TurkeyAdapter::fly()
{
    for (int i = 0; i < 5; ++i)
        mTurkey->fly();
}