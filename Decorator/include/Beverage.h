#ifndef HEADFIRSTDESIGNPATTERNS_BEVERAGE_H
#define HEADFIRSTDESIGNPATTERNS_BEVERAGE_H

#include <string>

class Beverage
{
public:
    enum class Size
    {
        SMALL,
        MEDIUM,
        BIG
    };

protected:
    std::string mDescription;
    Size mSize;

protected:
    Beverage();
    Beverage(const std::string& description, Size size);

public:
    virtual ~Beverage();

public:
    virtual std::string getDescription() const;
    virtual double cost() const = 0;

    virtual Size getSize() const;
    void setSize(Size newSize);

};


#endif //HEADFIRSTDESIGNPATTERNS_BEVERAGE_H
