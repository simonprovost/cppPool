/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

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
