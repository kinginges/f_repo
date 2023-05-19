#define _USE_MATH_DEFINES // to access M_PI -->> pi constant

#include <cmath> // math lib add-on
#include <iostream>
#include <Windows.h> // for SetCursorPos

int prompt()
{
    int prompt_option = 0;
    std::cout << "Please, choose one of the options." << std::endl;
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

void set_static_cursor_pos() // teleports cursor to a defined location on main screen
{
    int x_coord = 0;
    int y_coord = 0;
    std::cout << "Enter desired x coordinates: ";
    std::cin >> x_coord;
    std::cout << "Enter desired y coordinates: ";
    std::cin >> y_coord;
    SetCursorPos(x_coord, y_coord);
};

void move_mouse_circle() // moves mouse in a circular motion with any smoothness and radius
{

    int steps = 150;                                  // defines how rough the circle coordinates are calculated, the higher the smoother
    int radius = 200;                                 // defines radius of the circle
    float degree = 0;                                 // init degree steps, will be converted to radians later
    bool add_inconsistency = false;                   // bool to choose inconsistency in drawing timings
    char add_incon_answ;                              // storing the answer to the prompt about inconsistency
    const float const_to_radians = M_PI / float(180); // constant for an easier degree to radians convertion
    char test;                                        // inplemented for debugging only

    std::cout << "Please, provide the amount of steps for smoothness (default is at " << steps << "): "; // prompting for input
    std::cin >> steps;
    std::cout << "Please, provide the radius of the desired circle (default is at " << radius << "): ";
    std::cin >> radius;
    std::cout << "Do you want to add inconsistency to mimic human input? y/n: ";
    std::cin >> add_incon_answ;

    if (add_incon_answ == 'y') // prompting for inconsistency
    {
        add_inconsistency = true;
    }
    else
    {
        add_inconsistency = false;
    }

    float *x_coord = new float[steps]; // defining dynamic arrays for x coordinates
    float *y_coord = new float[steps]; // defining dynamic arrays for x coordinates

    float degree_increm = (float(360) * const_to_radians) / float(steps); // define degree increment per step AND converting degrees to radians
    /* std::cout << degree_increm << std::endl; // check because i had problem here with dividing int with int
    std::cin >> test; */

    for (int i = 0; i < steps + 1; i++) // steps + 1 so circle does actually complete fully
    {
        x_coord[i] = radius * cos(degree); // adding x coordinates to the array one by one using a mathematical equation
        y_coord[i] = radius * sin(degree); // adding y coordinates to the array one by one using a mathematical equation

        degree += degree_increm; // incrementing the degree (actually radians) to get next coordinate
        /* std::cout << x_coord[i] << std::endl; // debugging */
        /* std::cout << degree << std::endl; // debugging */
    }
    /* std::cin >> test;   // debugging */

    std::cout << "Starting in 3 seconds... ";
    Sleep(1000);
    std::cout << "2 seconds... ";
    Sleep(1000);
    std::cout << "1 second... " << std::endl;
    Sleep(990);

    int curr_x_coord; // define variable for current cursor pos for x axis on users PC
    int curr_y_coord; // define variable for current cursor pos for y axis on users PC

    POINT curr_cursor_p; // POINT typedef contains x and y long values
    GetCursorPos(&curr_cursor_p);
    curr_x_coord = curr_cursor_p.x;
    curr_y_coord = curr_cursor_p.y;

    for (int u = 0; u < steps + 1; u++) // steps + 1 so circle does actually complete fully
    {
        SetCursorPos(x_coord[u] + curr_x_coord, y_coord[u] + curr_y_coord);
        if (add_inconsistency == true)
        {
            float millis = 1 + ((10 + rand() % 3000) / 100);
            Sleep(millis);
        }
        else
        {
            Sleep(1);
        }
        /* std::cout << x_coord[u] << "," << y_coord[u] << "   ";  //debugging */
    };

    delete[] x_coord;
    delete[] y_coord;
};

unsigned int confirm() // asks if user wants to continue or exit the program
{
    char lets_go = 'O';
    std::cout << "Do you want to give it another go? y/n: ";
    std::cin >> lets_go;

    switch (lets_go)
    {
    case 'y':
        std::cout << "Great! Lets start over." << std::endl;
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
            break;

        case 2:
            /* auto_clicker(); */
            p_o = confirm();
            break;

        case 3:
            move_mouse_circle();
            p_o = confirm();
            break;

        case 4:
            /* move_mouse_box(); */
            p_o = confirm();
            break;
        };

        if (p_o == 5)
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
    };
    return 0;
};
