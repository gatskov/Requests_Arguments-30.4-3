#include <iostream>
#include "request.h"


std::map<std::string, std::string> headers;

void printPairMap(std::map<std::string, std::string>* headers)
{
    std::cout << "\t--------------------\n";
    for (auto pair : *headers)
    {
        std::cout << "\t - " << pair.first << " : " << pair.second << "\n";
    }
    std::cout << "\t--------------------\n";
}