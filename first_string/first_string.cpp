#include <iostream>
#include <string>

int main()
{
    std::string name, surname;
    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Enter your surname: " << std::endl;
    std::getline(std::cin, surname);
    int name_lenght = name.length() + surname.length();

    std::cout << "You name is " << name << " " << surname << " and it has " << name_lenght << " characters in it." << std::endl;

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};