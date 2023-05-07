#include <iostream>
/* #include <io.h>    //for setmode
#include <fcntl.h> //for _O_U16TEXT */
// didnt work for russian io

int main()
{
    /* std::cout << "Привет!" << std::endl;
    _setmode(_fileno(stdout), _O_U16TEXT); //used to convert io to utf16
    _setmode(_fileno(stdin), _O_U16TEXT);
    std::wcout << "Привет!" << std::endl; */

    /* _setmode(_fileno(stdout), _O_TEXT);
    _setmode(_fileno(stdin), _O_TEXT); */
    // used to go back to ordinary io

    char string_go[6] = "Hello";                   // string of 5 chars, coz /0at the end
    char string_fo[6] = {'H', 'e', 'l', 'l', 'o'}; // valid
    char string_mo[] = "Hello World!";             // also valid, most used

    char string[15];
    std::cout << "Input characters:" << std::endl;
    fgets(string, sizeof(string), stdin);
    std::cout << "Your wrote: " << string << std::endl;

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};