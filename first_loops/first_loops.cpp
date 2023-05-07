#include <iostream>

int main()
{
    int counter;

    for (counter = 0; counter < 20; counter += 4) //"break exits the loop completely"
    {
        std::cout << counter << std::endl;
        if (counter % 12 == 0)
        {
            break;
        }
    }

    for (counter = 0; counter < 20; counter += 3) //"conitnue" skips when counter is dividable by 9
    {

        if (counter % 9 == 0)
        {
            continue;
        }
        std::cout << counter << std::endl;
    }

    int i = 20;

    while (i > 0)
    {
        std::cout << i << std::endl;
        i /= 3;
    }

    i += 3;
    do //"does an iteration at least once before the condition ever is checked"
    {
        std::cout << i << std::endl;
        i--;
    } while (i > 0);

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};