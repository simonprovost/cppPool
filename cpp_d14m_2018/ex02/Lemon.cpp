/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Lemon.hpp"

Lemon::Lemon() : Fruit()
{
    this->_name = "lemon";
    this->_vitamin = 3;
}

std::string Lemon::getName() const
{
    return (this->_name);
}

Lemon::~Lemon() = default;
