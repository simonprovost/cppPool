/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &filename)
{
    this->setName(name);
    this->type = WOODY;

    if (filename == "") {
        this->setAscii("woody.txt");
    } else {
        this->setAscii(filename);
    }
}
