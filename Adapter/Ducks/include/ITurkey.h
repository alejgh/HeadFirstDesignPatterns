#ifndef HEADFIRSTDESIGNPATTERNS_ITURKEY_H
#define HEADFIRSTDESIGNPATTERNS_ITURKEY_H

class ITurkey
{
public:
    ITurkey() {}
    virtual ~ITurkey() {}

public:
    virtual void gobble() = 0;
    virtual void fly() = 0;

};

#endif //HEADFIRSTDESIGNPATTERNS_ITURKEY_H
