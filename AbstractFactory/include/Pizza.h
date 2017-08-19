#ifndef HEADFIRSTDESIGNPATTERNS_PIZZA_H
#define HEADFIRSTDESIGNPATTERNS_PIZZA_H

#include "IPizzaIngredientFactory.h"
#include "Veggies.h"
#include "Dough.h"
#include "Sauce.h"
#include "Cheese.h"
#include "Pepperoni.h"
#include "Clams.h"

#include <string>
#include <memory>
#include <vector>

class Pizza
{
public:
    using VeggiePtr = std::unique_ptr<Veggies>;

protected:
    std::shared_ptr<IPizzaIngredientFactory> mIngredientFactory;
    std::string mName;
    std::unique_ptr<Dough> mDough;
    std::unique_ptr<Sauce> mSauce;
    std::vector<VeggiePtr> mVeggies;
    std::unique_ptr<Cheese> mCheese;
    std::unique_ptr<Pepperoni> mPepperoni;
    std::unique_ptr<Clams> mClam;

protected:
    Pizza(std::shared_ptr<IPizzaIngredientFactory>& ingredientFactory);

public:
    virtual void prepare() = 0;

public:
    void bake();
    void cut();
    void box();
    void setName(const std::string& newName);
    std::string getName() const;

public:
    virtual std::ostream& print(std::ostream& os) const;

    friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);

};


#endif //HEADFIRSTDESIGNPATTERNS_PIZZA_H
