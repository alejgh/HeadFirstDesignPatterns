#ifndef HEADFIRSTDESIGNPATTERNS_POPCORNPOPPER_H
#define HEADFIRSTDESIGNPATTERNS_POPCORNPOPPER_H


class PopcornPopper
{
private:
    std::string mDescription;

public:
    PopcornPopper(const std::string& description);

public:
    void on();
    void off();
    void pop();

};


#endif //HEADFIRSTDESIGNPATTERNS_POPCORNPOPPER_H
