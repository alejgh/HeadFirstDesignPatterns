#ifndef HEADFIRSTDESIGNPATTERNS_ITERATOR_H
#define HEADFIRSTDESIGNPATTERNS_ITERATOR_H

template<typename T>
class Iterator
{
public:
    Iterator(){};
    virtual ~Iterator(){};

public:
    virtual bool hasNext() = 0;
    virtual T next() = 0;
};

#endif //HEADFIRSTDESIGNPATTERNS_ITERATOR_H
