#ifndef HEADFIRSTDESIGNPATTERNS_IDUCK_H
#define HEADFIRSTDESIGNPATTERNS_IDUCK_H


class IDuck
{
public:
    IDuck() {};
    virtual ~IDuck() {};

public:
    virtual void quack() = 0;
    virtual void fly() = 0;

};


#endif //HEADFIRSTDESIGNPATTERNS_IDUCK_H
