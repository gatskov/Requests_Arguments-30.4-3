#include <iostream>
#include "request.h"

void addPairMap(std::map<std::string, std::string> *headers, std::string first, std::string second)
{
    auto pair = std::make_pair(first, second);
    auto it = headers->find(first);
    if (it == headers->end())
        headers->insert(pair);
    else
        it->second = second;
    std::cout << "Pair " << first << " : " << second << " is added to map.\n";
}