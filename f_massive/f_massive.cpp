#include <iostream>

int main()
{
    int arr[] = {3, 7, 5};            // counting from 0-1-2
    std::cout << arr[0] << std::endl; // outputting the first number

    int arr2[3];

    for (int i = 0; i < sizeof(arr2) / sizeof(*arr2); i++) // asking for input for the new arr2 for the sizeof(arr)/sizeof(*arr) amount of times
    {
        std::cout << "Input " << i + 1 << " number:";
        std::cin >> arr2[i];
    }
    std::cout << std::endl;

    for (int i = 0; i < sizeof(arr2) / sizeof(*arr2); i++) // outputting array content for the sizeof... amount of times
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    int arr_2d[3][2] = {{2, 5}, {3, 6}, {4, 7}}; // declaring a 2d array
    int i = 0;

    for (int i = 0; i < sizeof(arr_2d) / sizeof(arr_2d[0]); i++) // outputting a 2d array as arr_2d[i][j], where i < sizeof(arr_2d) / sizeof(arr_2d[0]) AND j < sizeof(arr_2d[0]) / sizeof(arr_2d[0][0])
    {
        for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(arr_2d[0][0]); j++)
        {
            std::cout << arr_2d[i][j] << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};