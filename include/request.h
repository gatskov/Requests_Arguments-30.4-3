#pragma once

#include <iostream>
#include <map>

enum RequestType
{
    GET,
    POST
};

void printPairMap(std::map<std::string, std::string> *headers);
std::string makeURLRequestFromHeaders(std::map<std::string, std::string> *headers);
void sendRequest(RequestType requestType, std::map<std::string, std::string> *headers);
void addPairMap(std::map<std::string, std::string> *headers, std::string first, std::string second);
void TableContents();
void addParameters();