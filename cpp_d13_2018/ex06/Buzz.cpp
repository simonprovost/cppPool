/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &filename)
{
    this->setName(name);
    this->type = BUZZ;

    if (filename == "") {
        this->setAscii("buzz.txt");
    } else {
        this->setAscii(filename);
    }
}

bool Buzz::speak(std::string const &sentence)
{
    std::cout << "BUZZ: " << this->getName() << " \"" << sentence << "\"" <<
    std::endl;
    return (true);
}

bool Buzz::speak_es(std::string const &sentence)
{
    std::cout << "BUZZ: " << this->getName() << " senorita \"" << sentence <<
    "\" senorita" << std::endl;
    return (true);
}
