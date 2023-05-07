#include <iostream>

int main()
{
    int num, num2;
    std::cout << "Enter first number: " << std::endl;
    std::cin >> num;
    std::cout << "Enter second number: " << std::endl;
    std::cin >> num2;

    try
    {
        if (num2 == 0)
            throw std::invalid_argument("Error! Divider cannot be 0!");
        std::cout << "num / num2 = " << num / num2 << std::endl;
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};