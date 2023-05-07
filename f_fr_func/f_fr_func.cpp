#include <iostream>

class a; // writing this here, so friend function dont throw an error due to yet undefined class
class b;

class a
{
    friend int sum(a, b); // declaring a friend function

private:
    int u;

public:
    a()
    {
        std::cout << "Enter value for u: ";
        std::cin >> u;
    }
};

class b
{
    friend int sum(a, b); // declaring a friend function

private:
    int y;

public:
    b()
    {
        std::cout << "Enter value for y: ";
        std::cin >> y;
    }
};

int sum(a first, b second) // friend function declared in both class a and class b scope
{
    return (first.u + second.y);
};

int main()
{
    a first;
    b second;
    std::cout << sum(first, second) << std::endl;

    std::cout << "Congrats! You code worked super-duper well!" << std::endl;
    return 0;
};