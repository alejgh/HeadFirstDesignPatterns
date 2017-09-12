#ifndef HEADFIRSTDESIGNPATTERNS_PANCAKEHOUSEMENU_H
#define HEADFIRSTDESIGNPATTERNS_PANCAKEHOUSEMENU_H

#include "Menu.h"
#include "MenuItem.h"

#include <vector>

class PancakeHouseMenu : public Menu
{
public:
    PancakeHouseMenu();
    ~PancakeHouseMenu();

public:
    void addItem(const std::string& name, const std::string& description,
                 bool isVegetarian, double price);
    virtual Iterator createIterator() override;

    virtual std::ostream& print(std::ostream& os) const override;

private:
    std::vector<MenuItem> mMenuItems;

};


#endif //HEADFIRSTDESIGNPATTERNS_PANCAKEHOUSEMENU_H
