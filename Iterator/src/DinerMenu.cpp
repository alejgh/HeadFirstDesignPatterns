#include "DinerMenu.h"

DinerMenu::DinerMenu()
        : mNumberOfItems(0)
        , mMenuItems()
{
    addItem("Vegetarian BLT",
            "(Fakin') Bacon with lettuce & tomato on whole wheat",
            true,
            2.99);

    addItem("BLT",
            "Bacon with lettuce & tomato on whole wheat",
            false,
            2.99);

    addItem("Hotdog",
            "A hot dog, with saurkraut, relish, onions, topped with cheese",
            false,
            3.05);

    addItem("Steamed Veggies and Brown Rice",
            "Steamed vegetables over brown rice",
            true,
            3.99);

    addItem("Pasta",
            "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
            true,
            3.89);
}

void DinerMenu::addItem(const std::string &name, const std::string &description,
                        bool vegetarian, double price)
{
    if (mNumberOfItems >= MAX_ITEMS)
        std::cout << "Sorry, menu is full! Can't add item to menu.\n";
    else
    {
        MenuItem menuItem(name, description, vegetarian, price);
        mMenuItems[mNumberOfItems] = menuItem;
        mNumberOfItems++;
    }
}

Iterator DinerMenu::createIterator()
{

}