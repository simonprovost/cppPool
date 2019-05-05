/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include "ToyStory.hpp"

bool line_contain_pattern(std::string pattern, char delim, std::string line)
{
    if (line.empty() || pattern.empty())
        return false;
    std::size_t found = line.find_first_of(delim);
    if (found == std::string::npos)
        return (false);
    line[found] = 0;
    if (strcmp(line.data(), pattern.c_str()) == 0)
        return (true);
    return (false);
}

static std::vector<std::string> split(std::string str, std::string delimiter)
{
    size_t pos = 0;
    std::string token;
    std::vector<std::string> tab;
    while ((pos = str.find(delimiter)) != std::string::npos) {
        token = str.substr(0, pos);
        tab.push_back(token);
        str.erase(0, pos + delimiter.length());
    }
    tab.push_back(str);
    return tab;
}

void ToyStory::tellMeAStory(std::string filename, Toy &toy1,
    bool (Toy::*func1)(const std::string &s1), Toy &toy2, bool (Toy::*func2)
    (const std::string &s2))
{
    int rotating_basis = 0;


    std::ifstream input(filename);
    if (!input.is_open()) {
        std::cout << "Bad Story" << std::endl;
        return;
    }
    std::cout << toy1.getAscii().c_str() << std::endl;
    std::cout << toy2.getAscii().c_str() << std::endl;

    for( std::string line ; !input.eof() ;) {
        getline(input, line);
        if ((rotating_basis % 2) == 0) {
            std::vector<std::string> tab = split(line, ":");
            if (tab[0] == "picture") {
                if (!toy1.setAscii(tab[1])) {
                    auto e = toy1.getLastError();
                    std::cout << e.where() << ": " << e.what() << std::endl;
                    return;
                }
                std::cout << toy1.getAscii()
                    << std::endl;
            } else {
                rotating_basis++;
                if (!(toy1.*func1)(line)) {
                    auto e = toy1.getLastError();
                    std::cout << e.where() << ": " << e.what() << std::endl;
                    return;
                }
            }
        } else {
            std::vector<std::string> tab = split(line, ":");
            if (tab[0] == "picture") {
                if (!toy2.setAscii(tab[1])) {
                    auto e = toy2.getLastError();
                    std::cout << e.where() << ": " << e.what() << std::endl;
                    return;
                }
                std::cout << toy2.getAscii()
                    << std::endl;
            } else {
                rotating_basis++;
                if (!(toy2.*func2)(line)) {
                    auto e = toy2.getLastError();
                    std::cout << e.where() << ": " << e.what() << std::endl;
                    return;
                }
            }
        }
    }
}
