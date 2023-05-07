#include <iostream>

float circumf(float x, float y);
int circumf(int a, int b, int c);

int main()
{

    std::cout << "The circumfurence of a square equals " << circumf(12.5, 12.6) << std::endl;
    std::cout << "The circumfurence of a triangle equals " << circumf(1, 2, 1) << std::endl;
    std::cout << "The circumfurence of a triangle equals " << circumf(1.5, 2, 1) << std::endl; // goes to int circumf() and strips the 1,5 into 1
    std::cout << "The circumfurence of a triangle equals " << circumf(1, 2) << std::endl;
    // std::cout << "The circumfurence of a triangle equals " << circumf(1) << std::endl; // throws an error coz nor 2 or 3 arguments are defined

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};

float circumf(float x, float y)
{
    auto circumf_result = 2 * x + 2 * y;
    return circumf_result;
};

int circumf(int a, int b, int c)
{
    auto circumf_result = a + b + c;
    return circumf_result;
};