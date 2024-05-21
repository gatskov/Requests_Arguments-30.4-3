#include <iostream>
#include "request.h"

void TableContents()
{
    std::string menu;

    std::cout
        << "+------------------------------------------------------+\n"
        << "| (get)   - Creating a get request with named headers. |\n"
        << "| (post)  - Creating a post request with named headers.|\n"
        << "| (print) - to print actual headers & values.          |\n"
        << "| (clear) - to remove actual headers & values.         |\n"
        << "| (exit)   - Exit the program                          |\n"
        << "+------------------------------------------------------+"
        << std::endl;
    std::cout << "Sequentially enters their names along with the values \nuntil an argument with the name \" post \" or \" get \" meets\n";
    std::cout << "(For example:  Headers Value, Headers Value, .........get/post <Enter>.)\n-> ";
    addParameters();

    std::cout << "     +-----+\n";
    std::cout << "     | END |\n";
    std::cout << "     +-----+\n";
}