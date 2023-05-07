#include <iostream>
void func(int num); // declaring func() here so main can see void func later in the code declared after the main itself

float sum(float x, float y)
{
    float result;
    result = x + y;
    return result;
    
}

int main()
{
    int num = 645;

    func(num);
    std::cout << sum(23.23, 24.24) << std::endl;

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};

void func(int num) // this function is after the main function
{
    std::cout << "Parameter - " << num << std::endl;
}