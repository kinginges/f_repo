#include <iostream>
#include <Windows.h>

int prompt()
{
    int prompt_option = 0;
    std::cout << "Please, choose one of the options." << std::endl;
    std::cout << "Enter a number corresponding to your desired mouse behaviour:" << std::endl;
    std::cout << "1. Static position\n2. Auto clicker\n3. Circular motion\n 4. Box-shaped motion\n5. Exit the program";

    std::cin >> prompt_option;
    while (std::cin.fail())
    {
        std::cout << "Error" << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> prompt_option;
    }

    return prompt_option;
};

int get_func(int p_o);
{

};

void move_mouse(int p_o)
{
    get_func(p_o);
};

void set_cursor_pos();

void main()
{
    while (int p_o != 5)
    {
        int p_o = prompt();

        switch (p_o)
        {
        case 1:
            set_cursor_pos();
            break;

        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;

        case 5:
            std::cout << "Exiting the program." << std::endl;
            break;
        }
    }
};