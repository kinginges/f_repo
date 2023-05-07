#include <iostream>
#include <fstream> //include to work with files (file stream)(std::ofstrea output)(std::ifstream input)

int main()
{
    std::ofstream file_w("text.txt"); // shortcut to open the file
    /* file.open("text.txt"); */      // can be opened like as well
    if (file_w.is_open())             // if else practice to catch errors!
    {
        file_w << "Wow, reading files in c++ really works!";
        file_w.close();
    }
    else
    {
        std::cout << "Error, file count not be handled!" << std::endl;
    };

    char text[50];

    std::ifstream file_r("text.txt"); // can input a parameter for mode like this ("text.txt", std::ifstream::in)
    if (!file_r.is_open())            // modes:open for in - input, out - open for output, binary open in binary, ate put pointer at and, app - append, trunc idk
    {
        std::cout << "Error, file could not be opened!" << std::endl;
    }
    else
    {
        //        file >> text;
        //   std::cout << text << std::endl; This structure only reads one word from the doc
        file_r.getline(text, 50);
        std::cout << text << std::endl;
        file_r.close();
    }

    std::cout << "Your code ran successfully! You did great!";
    return 0;
};