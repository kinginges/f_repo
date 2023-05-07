#include <iostream>

class First
{
protected:
    int value;

    First(int value)
    {
        this->value = value;
        std::cout << value << std::endl;
    };
    void set(int value)
    {
        this->value = value;
    };
};

class Second : public First // class Second now inherited everything but private domain from First class
{
public:
    Second(int val) : First(val){};
    /* {
        value = val;
        set(value);
        std::cout << value << std::endl;
    } */
};

class Third : public First // class Second now inherited everything but private domain from First class
{
public:
    Third(int val) : First(val){};
};

int main()
{
    Second elem(4);
    Third eleme(987);
};