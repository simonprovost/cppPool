/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Banana.hpp"

Banana::Banana()
{
    this->_name = "banana";
    this->_vitamin = 5;
}

std::string Banana::getName() const
{
    return (this->_name);
}

Banana::~Banana() = default;
