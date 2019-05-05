/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Fruit.hpp"

Fruit::Fruit()
{
}

Fruit::~Fruit() = default;

int Fruit::getVitamins() const
{
    return _vitamin;
}

bool Fruit::operator==(const Fruit &rhs) const
{
    return _vitamin == rhs._vitamin && _name == rhs._name;
}

bool Fruit::operator!=(const Fruit &rhs) const
{
    return !(rhs == *this);
}
