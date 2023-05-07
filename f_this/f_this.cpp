#include <iostream>

/* class Test //NORMAL FORMATTING
{
private:
    int a, b, c;

public:
    void set(int a_a, int b_b, int c_c)
    {
        a = a_a;
        b = b_b;
        c = c_c;
    }
    void get()
    {
        std::cout << "A = " << a << ", b = " << b << ", c = " << c << std::endl;
    }
}; */

class Test // using "this->"" operand
{
private:
    int a, b, c;

public:
    void set(int a, int b, int c)
    {
        this->a = a; // using "this->" allows to specifically target the constand inside particular class
        this->b = b;
        this->c = c;
    }
    void get()
    {
        std::cout << "A = " << a << ", b = " << b << ", c = " << c << std::endl;
    }
};

int main()
{
    Test test_elem;
    test_elem.set(12, 23, 1);
    test_elem.get();
};