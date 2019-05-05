/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Coconut.hpp"

Coconut::Coconut() : Fruit()
{
    this->_name = "coconut";
    this->_vitamin = 15;
}

std::string Coconut::getName() const
{
    return (this->_name);
}

Coconut::~Coconut() = default;
