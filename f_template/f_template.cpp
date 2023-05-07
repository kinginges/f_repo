#include <iostream>

/* void print_arr(const int *array, int arr_size) //these 4 functions can be all written using a template, coz only data type changes, but the algorhytm is the same
{
    for (int j = 0; j < arr_size; j++)
    {
        std::cout << array[j] << " ";
    }
    std::cout << std::endl;
};
void print_arr(const float *array, int arr_size)
{
    for (int j = 0; j < arr_size; j++)
    {
        std::cout << array[j] << " ";
    }
    std::cout << std::endl;
};
void print_arr(const double *array, int arr_size)
{
    for (int j = 0; j < arr_size; j++)
    {
        std::cout << array[j] << " ";
    }
    std::cout << std::endl;
};
void print_arr(const char *array, int arr_size)
{
    for (int j = 0; j < arr_size; j++)
    {
        std::cout << array[j] << " ";
    }
    std::cout << std::endl;
}; */

template <typename T, typename T2>
T2 print_arr(const T *array, int arr_size) // T2 in this case is used to return back count value, just for the sake of it, really no reason to
{
    int count = 0;
    for (int j = 0; j < arr_size; j++)
    {
        std::cout << array[j] << " ";
        count++;
    }
    std::cout << std::endl;
    return count;
};

int main()
{
    const int iSize = 3, fSize = 2, dSize = 3, cSize = 5;
    int i_arr[iSize] = {23, 45, 78};
    float f_arr[fSize] = {12.2, 67.5};
    double d_arr[dSize] = {3.345, 7.546, 9.023};
    char c_arr[cSize] = {"HI!!"};

    std::cout << "An array of integers: ";
    print_arr<int, int>(i_arr, iSize); // normal syntax w/o several typenames would be "print_arr(i_arr, iSize);", but since we have 2 typenames, where 1 is also a return we use <> in addition
    std::cout << "An array of float values: ";
    print_arr<float, int>(f_arr, fSize);
    std::cout << "An array of doubles: ";
    print_arr<double, int>(d_arr, dSize);
    std::cout << "An array of chars: ";
    print_arr<char, int>(c_arr, cSize);

    return 0;
};