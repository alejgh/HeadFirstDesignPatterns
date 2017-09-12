#ifndef HEADFIRSTDESIGNPATTERNS_DINERMENU_H
#define HEADFIRSTDESIGNPATTERNS_DINERMENU_H


class DinerMenu
{
    friend class DinerMenuIterator;

public:
    DinerMenu();

public:
    void addItem(const std::string& name, const std::string& description,
                 bool vegetarian, double price);


public:
    virtual Iterator createIterator() override;


private:
    static const int MAX_ITEMS = 6;
    int mNumberOfItems = 0;
    std::array<DinerMenu, MAX_ITEMS> mMenuItems;


};


#endif //HEADFIRSTDESIGNPATTERNS_DINERMENU_H
