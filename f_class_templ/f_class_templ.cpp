#include <iostream>

const int arr_len = 3;

template <class Type>
class Arr
{
private:
    Type arr[arr_len];

public:
    Arr(Type *a)
    {
        for (int i = 0; i < arr_len; i++)
        {
            arr[i] = a[i];
        }
    };
    Type get_element(int i)
    {
        return arr[i];
    }
};

int main()
{
    int arr[] = {12, 23, 45, 6};
    Arr<int> obj(arr);
    std::cout << obj.get_element(2) << std::endl;

    char arr_2[] = {"Mars!"};
    Arr<char> object(arr_2);
    std::cout << object.get_element(2) << std::endl;

    std::cout << arr << arr_2 << std::endl;

    return 0;
};