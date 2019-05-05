/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Victim.hpp"

Victim::Victim(const std::string &name)
{
    this->_name = name;
    std::cout << "Some random victim called " << this->getName() << " just "
                                                                    "popped!" <<
        std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->getName() << " just died for no apparent "
                                          "reason!" << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout << this->getName() << " has been turned into a cute "
                                    "little sheep!" << std::endl;
}

const std::string &Victim::getName() const
{
    return _name;
}

std::ostream& operator<<(std::ostream& os, Victim const &obj)
{
    os << "I'm " << obj.getName() << " and i like otters!" << std::endl;
    return (os);
}
