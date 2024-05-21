#include <iostream>
#include "request.h"


void addParameters()
{
    std::map<std::string, std::string> headers;
    std::string input;
    std::string headerName;
    std::string headerValue;
    bool isFirst = true;

    do
    {
        std::cin >> input;
        if (input == "get")
        {
            sendRequest(GET, &headers);
        }
        else if (input == "post")
        {
            sendRequest(POST, &headers);
        }
        else if (input == "print")
        {
            printPairMap(&headers);
        }
        else if (input == "clear")
        {
            std::cout << "Clearing headers...\n";
            headers.clear();
            std::cout << "Headers are cleared.\n";
        }
        else if (input == "exit")
        {
            break;
        }
        else
        {
            if (isFirst)
            {
                headerName = input;
                isFirst = false;
            }
            else
            {
                headerValue = input;
                auto pair = std::make_pair(headerName, headerValue);
                addPairMap(&headers, headerName, headerValue);
                isFirst = true;
            }
        }
    } while (input != "exit");
}