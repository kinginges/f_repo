#include <iostream>

int main()
{
    const float pi = 3.1415926; // const pi is now read-only, cannot be rewritten, but can be accessed!

    int val = 98;
    int *ptr_value = &val;

    std::cout << *ptr_value << std::endl; // outputs value of val
    std::cout << ptr_value << std::endl;  // outputs pointer value

    int **ptr_ptr_value = &ptr_value; // added a pointer to the pointer
    std::cin >> **ptr_ptr_value;      // changing the value of val via pointer to the pointer to the val
    std::cout << **ptr_ptr_value << std::endl;

    int &ref = val; // reference cant be used in arithmetic, cant be null, cant be reassigned ever
    std::cout << ref << std::endl;

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};