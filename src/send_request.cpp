#include <iostream>
#include "request.h"
#include "cpr/cpr.h"


const std::string WEBSITE_GET = "http://httpbin.org/get";
const std::string WEBSITE_POST = "http://httpbin.org/post";

void sendRequest(RequestType requestType, std::map<std::string, std::string>* headers)
{
    if (requestType == POST)
    {
        cpr::Payload payLoad({});
        for (auto it : *headers)
        {
            cpr::Pair* p = new cpr::Pair(it.first.c_str(), it.second.c_str());
            payLoad.Add(*p);
        }
        cpr::Response r = cpr::Post(cpr::Url(WEBSITE_POST),
                                    cpr::Payload(payLoad));
        std::cout << "POST request is sent.\n";
        std::cout << "Server reply:\n";
        std::cout << r.text << "\n";
    }
    else if (requestType == GET)
    {
        std::string urlWithParameters = WEBSITE_GET + makeURLRequestFromHeaders(headers);
        cpr::Response r = cpr::Get(cpr::Url(urlWithParameters));
        std::cout << "GET request is sent: " + urlWithParameters + "\n";
        std::cout << "Server reply:\n";
        std::cout << r.text << "\n";
    }
}