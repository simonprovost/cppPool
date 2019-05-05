/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
    this->_name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a pink pony!" <<
    std::endl;
}

std::ostream& operator<<(std::ostream& os, Peon const &obj)
{
    os << "I'm " << obj.getName() << " and i like otters!" << std::endl;
    return (os);
}