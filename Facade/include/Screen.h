#ifndef HEADFIRSTDESIGNPATTERNS_SCREEN_H
#define HEADFIRSTDESIGNPATTERNS_SCREEN_H


class Screen
{
private:
    std::string mDescription;

public:
    Screen(const std::string& description);

public:
    void up();
    void down();

};


#endif //HEADFIRSTDESIGNPATTERNS_SCREEN_H
