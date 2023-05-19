#define _USE_MATH_DEFINES // to access M_PI -->> pi constant

#include <cmath> // math lib add-on
#include <iostream>
#include <Windows.h> // for SetCursorPos

int prompt()
{
    int prompt_option = 0;
    std::cout << "Please, choose one of the options." << std::endl;
    std::cout << "Enter a number corresponding to your desired mouse behaviour:" << std::endl;
    std::cout << "1. Static position\n2. Auto clicker\n3. Circular motion\n4. Box-shaped motion\n5. Exit the program" << std::endl; // Printing out menu options

    std::cin >> prompt_option;

    while (std::cin.fail() || prompt_option < 1 || prompt_option > 5) // Exe check for invalid arg or invalid arg types
    {
        std::cout << "Error, your input is invalid, try again: " << std::endl;
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> prompt_option;
    }

    return prompt_option;
};

void set_static_cursor_pos()
{
    int x_coord = 0;
    int y_coord = 0;
    std::cout << "Enter desired x coordinates: ";
    std::cin >> x_coord;
    std::cout << "Enter desired y coordinates: ";
    std::cin >> y_coord;
    SetCursorPos(x_coord, y_coord);
    std::cout << "The prompt has been executed. Check for the expected output and report any issues." << std::endl;
};

void move_mouse_circle()
{

    int steps = 200; // init default values everything
    int radius = 200;
    float degree = 0;
    bool add_inconsistency;
    char add_incon_answ;
    char test;
    float const_to_radians = M_PI / float(180);

    std::cout << "Please, provide the amount of steps for smoothness (default is at " << steps << "): ";
    std::cin >> steps;
    std::cout << "Please, provide the radius of the desired circle (default is at " << radius << "): ";
    std::cin >> radius;
    std::cout << "Do you want to add inconsistency to mimic human input? y/n: ";
    std::cin >> add_incon_answ;
    if (add_incon_answ == 'y')
    {
        add_inconsistency = true;
    }
    else
    {
        add_inconsistency = false;
    }

    /* float x_coord;
    float y_coord; */
    float *x_coord = new float[steps];
    float *y_coord = new float[steps];

    float degree_increm = (float(360) * const_to_radians) / float(steps); // define degree increment per step
    /* std::cout << degree_increm << std::endl; // check because i had problem here with dividing int with int
    std::cin >> test; */

    for (int i = 0; i < steps + 1; i++) // steps + 1 so circle does actually complete fully
    {
        // float radian = degree_increm / (2 * M_PI); // converting degrees to radians
        x_coord[i] = radius * cos(degree);
        y_coord[i] = radius * sin(degree);
        /* std::cout << x_coord[i] << std::endl; // debugging */

        degree += degree_increm;
        /* std::cout << degree << std::endl; // debugging */
    }

    /* std::cin >> test;   // debugging */

    std::cout << "Starting in 3 seconds... ";
    Sleep(1000);
    std::cout << "2 seconds... ";
    Sleep(1000);
    std::cout << "1 second... " << std::endl;
    Sleep(990);

    int curr_x_coord; // define var for current cursor pos for x axis
    int curr_y_coord; // define var for current cursor pos for y axis

    POINT curr_cursor_p; // POINT typedef contains x and y long
    GetCursorPos(&curr_cursor_p);
    curr_x_coord = curr_cursor_p.x;
    curr_y_coord = curr_cursor_p.y;

    for (int u = 0; u < steps + 1; u++) // steps + 1 so circle does actually complete fully
    {
        /* std::cout << x_coord[u] << "," << y_coord[u] << "   ";  //debugging */
        SetCursorPos(x_coord[u] + curr_x_coord, y_coord[u] + curr_y_coord);
        if (add_inconsistency == true)
        {
            float millis = 1 + ((1 + rand() % 50) / 100);
            Sleep(millis);
        }
        else
        {
            Sleep(1);
        }
    };

    /* while (degree < 360)
    {
        degree += degree_increm;
    } */

    delete[] x_coord;
    delete[] y_coord;
};

unsigned int confirm() // function to ask if user wants to repeat the process or exit the program
{
    char lets_go = 'O';
    std::cout << "Do you want to give it another go? y/n:";
    std::cin >> lets_go;

    switch (lets_go)
    {
    case 'y':
        std::cout << "Great! Lets start over.";
        return 0; // return 0 to set p_o to 0 to prevent any other switch-cases from being triggered
    case 'n':
        std::cout << "It's been fun! See you around next time." << std::endl;
        return 5; // triggering if statement to exit the program
    default:
        std::cout << "Think again.";
        confirm();
    }
};

int main()
{
    int p_o = 0; // init prompt option
    while (true) // looping the menu so several interactions can be done
    {
        int p_o = prompt();

        switch (p_o)
        {
        case 1:
            set_static_cursor_pos();

            p_o = confirm();
        case 2:
            /* auto_clicker(); */

            p_o = confirm();
        case 3:
            move_mouse_circle();

            p_o = confirm();
        case 4:
            /* move_mouse_box(); */

            p_o = confirm();
        };

        if (p_o == 5)
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
    };
    std::cin;
    return 0;
};
