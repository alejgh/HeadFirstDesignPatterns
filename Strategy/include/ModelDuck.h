#ifndef HEADFIRSTDESIGNPATTERNS_MODELDUCK_H
#define HEADFIRSTDESIGNPATTERNS_MODELDUCK_H

#include "Duck.h"

class ModelDuck : public Duck
{
public:
    ModelDuck();

    virtual void display() override;

};


#endif //HEADFIRSTDESIGNPATTERNS_MODELDUCK_H
