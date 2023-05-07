#include <iostream>

struct date
{
    int year;
};

struct Car // structs are defined outside of other functions, such as main()
{
    int wheels;
    float speed;
    char color;

    date manuf_date; // structure calling another structure, so that any CAR also has a manufacturing date from a different struct
};

int main()
{
    Car Mazda;
    Mazda.color = 'r';
    Mazda.speed = 82.5;
    Mazda.wheels = 4;
    Mazda.manuf_date.year = 2007;

    Car Audi = {4, 67.25, 'b'};

    std::cout << "Audis speed is " << Audi.speed << " and Mazda was manufactured in " << Mazda.manuf_date.year << "." << std::endl;

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};