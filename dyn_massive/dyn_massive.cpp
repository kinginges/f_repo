#include <iostream>

int main()
{
    int *ptr_num = new int;
    *ptr_num = 7;
    std::cout << *ptr_num << std::endl;
    delete ptr_num;

    float *ptr_array = new float[10];

    for (int i = 0; i < 10; i++)
    {
        ptr_array[i] = rand() % 80 + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << ptr_array[i] << " ";
    }
    std::cout << std::endl;

    delete[] ptr_array;

    std::cout << *ptr_num << std::endl; // will output nonesense as dynamic pointer is already deleted!

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};