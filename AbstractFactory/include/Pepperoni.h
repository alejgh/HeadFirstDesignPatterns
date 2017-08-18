#ifndef HEADFIRSTDESIGNPATTERNS_PEPPERONI_H
#define HEADFIRSTDESIGNPATTERNS_PEPPERONI_H

class Pepperoni
{
    virtual std::ostream& print(std::ostream& os) const = 0;


    friend std::ostream& operator<<(std::ostream& os, const Pepperoni& pepperoni);
};


std::ostream& operator<<(std::ostream& os, const Pepperoni& pepperoni)
{
    return pepperoni.print(os);
}

#endif //HEADFIRSTDESIGNPATTERNS_PEPPERONI_H
