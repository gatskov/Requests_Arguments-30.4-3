#include <iostream>
#include "request.h"

std::string makeURLRequestFromHeaders(std::map<std::string, std::string>* headers)
{
    if (headers->empty()) return "";
    std::string result = "?";
    {
        for (auto it : *headers)
        {
            result += it.first;
            result += "=";
            result += it.second;
            result += "&";
        }
    }
    if (result[result.length() - 1] == '&')
        result.resize(result.length()-1);

    return result;
}
