#include <iostream>

enum tree // enumeration requires object defining at once
{
    tree_1,
    tree_2,
    tree_3
};

enum car // enum with values
{
    car_1 = 1999,
    car_2 = 2004,
    car_3 = 2012
};

enum mall
{
    parking = -1,
    hall,
    shopping_area,
    roof
};

int main()
{
    std::cout << tree_1 << std::endl; // automatically gets assigned value 0
    std::cout << tree_2 << std::endl; // 1
    std::cout << tree_3 << std::endl; // and 2 respectively when outputting

    std::cout << car_1 << std::endl; // outputs its assigned value
    std::cout << car_2 << std::endl;
    std::cout << car_3 << std::endl;

    int floor;
    bool exit = false; // equals null by default

    while (!exit)
    {
        std::cout << "Enter your floor number: " << std::endl;
        std::cin >> floor;
        switch (floor)
        {
        case parking:
            std::cout << "You are now on the " << parking << " parking floor!" << std::endl;
            break;

        case hall:
            std::cout << "You are now on the " << hall << " hall floor!" << std::endl;
            break;

        case shopping_area:
            std::cout << "You are now on the " << shopping_area << " shopping area floor!" << std::endl;
            break;

        case roof:
            std::cout << "You are now on the roof!" << std::endl;
            break;

        default:
            std::cout << "There is no such floor!" << std::endl;
            break;
        }
        std::cout << "Press 0 to select floor again or 1 to exit the elevator" << std::endl;
        std::cin >> exit;
    }

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};