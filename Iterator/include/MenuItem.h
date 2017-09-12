#ifndef HEADFIRSTDESIGNPATTERNS_MENUITEM_H
#define HEADFIRSTDESIGNPATTERNS_MENUITEM_H

#include <string>

namespace std
{
    class ostream;
}

class MenuItem
{
public:
    MenuItem(const std::string& name, const std::string& description,
             bool vegetarian, double price);

public:
    const std::string& getName() const;
    const std::string& getDescription() const;
    bool isVegetarian() const;
    double getPrice() const;

public:
    friend std::ostream& operator<<(std::ostream& os, const MenuItem& menuItem);

private:
    std::string mName;
    std::string mDescription;
    bool mIsVegetarian;
    double mPrice;

};


#endif //HEADFIRSTDESIGNPATTERNS_MENUITEM_H
