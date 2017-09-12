#include "PancakeHouseMenu.h"

#include <ostream>

PancakeHouseMenu::PancakeHouseMenu()
        : mMenuItems()
{
    addItem("K&B's Pancake Breakfast",
            "Pancakes with scrambled eggs, and toast",
            true,
            2.99);

    addItem("Regular Pancake Breakfast",
            "Pancakes with fried eggs",
            false,
            2.99);

    addItem("Blueberry Pancakes",
            "Pancakes made with fresh blueberries",
            true,
            3.49);

    addItem("Waffles",
            "Waffles, with your choice of blueberries or strawberries",
            true,
            3.59);
}

void PancakeHouseMenu::addItem(const std::string &name, const std::string &description,
                               bool isVegetarian, double price)
{
    MenuItem menuItem(name, description, isVegetarian, price);
    mMenuItems.push_back(menuItem);
}

Iterator PancakeHouseMenu::createIterator()
{

}

std::ostream& PancakeHouseMenu::print(std::ostream &os) const
{
    os << "Objectville Pancake House Menu.\n";
    return os;
}