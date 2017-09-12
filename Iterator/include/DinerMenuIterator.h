#ifndef HEADFIRSTDESIGNPATTERNS_DINERMENUITERATOR_H
#define HEADFIRSTDESIGNPATTERNS_DINERMENUITERATOR_H

#include "Iterator.h"
#include "MenuItem.h"

template<typename T>
class DinerMenuIterator : public Iterator<T>
{
public:
    DinerMenuIterator(std::array<MenuItem, DinerMenu::MAX_ITEMS> items);

public:
    bool hasNext() override;
    T next() override;

private:
    std::array<MenuItem, DinerMenu::MAX_ITEMS> mItems;
    int mPosition;

};

#endif //HEADFIRSTDESIGNPATTERNS_DINERMENUITERATOR_H
