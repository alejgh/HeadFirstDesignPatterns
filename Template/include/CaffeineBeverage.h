#ifndef HEADFIRSTDESIGNPATTERNS_CAFFEINEBEVERAGE_H
#define HEADFIRSTDESIGNPATTERNS_CAFFEINEBEVERAGE_H


class CaffeineBeverage
{
public:
    CaffeineBeverage();
    virtual ~CaffeineBeverage();

public:
    void prepareRecipe();

protected:
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    virtual bool customerWantsCondiments(); // hook example

    void boilWater();
    void pourInCup();

};


#endif //HEADFIRSTDESIGNPATTERNS_CAFFEINEBEVERAGE_H
