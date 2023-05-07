#include <iostream>
#include <string>

int main()
{
    std::cout << "One random number is " << rand() % 80 << std::endl;     // 0-80 rng
    std::cout << "One random number is " << 1 + rand() % 80 << std::endl; // 1-80 rng

    return 0;
};