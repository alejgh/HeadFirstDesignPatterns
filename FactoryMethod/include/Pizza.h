#ifndef HEADFIRSTDESIGNPATTERNS_PIZZA_H
#define HEADFIRSTDESIGNPATTERNS_PIZZA_H

#include <string>
#include <vector>

class Pizza
{
protected:
    std::string mName;
    std::string mDough;
    std::string mSauce;
    std::vector<std::string> mToppings;

protected:
    Pizza();
    Pizza(const std::string& name, const std::string& dough, const std::string& sauce);

public:
    ~Pizza();

public:
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();

    std::string getName() const;
    std::string getDough() const;
    std::string getSauce() const;
};


#endif //HEADFIRSTDESIGNPATTERNS_PIZZA_H
