#ifndef HEADFIRSTDESIGNPATTERNS_IMENU_H
#define HEADFIRSTDESIGNPATTERNS_IMENU_H

namespace std
{
    class ostream;
}

class Menu
{
public:
    Menu();
    virtual ~Menu();

public:
    virtual Iterator createIterator() = 0;

    virtual std::ostream& print(std::ostream& os) const = 0;
    friend std::ostream& operator<<(std::ostream& os, const PancakeHouseMenu& menu);
};

#endif //HEADFIRSTDESIGNPATTERNS_IMENU_H
