#ifndef HEADFIRSTDESIGNPATTERNS_CHOCOLATEBOILER_H
#define HEADFIRSTDESIGNPATTERNS_CHOCOLATEBOILER_H


class ChocolateBoiler
{
private:
    bool mEmpty;
    bool mBoiled;

private:
    ChocolateBoiler();
    ~ChocolateBoiler();
    ChocolateBoiler(const ChocolateBoiler& rhsChocBoiler) = delete;
    const ChocolateBoiler operator=(const ChocolateBoiler& rhsChocBoiler) = delete;

public:
    static ChocolateBoiler& getInstance();
    void fill();
    void drain();
    void boil();

    bool isEmpty() const;
    bool isBoiled() const;
};


#endif //HEADFIRSTDESIGNPATTERNS_CHOCOLATEBOILER_H
