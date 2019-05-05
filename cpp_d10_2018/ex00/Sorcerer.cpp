/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : name(
    name), title(title)
{
    std::cout << this->name << ", " << this->title << ", is born!" <<
    std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. "
                                                       "Consequences will "
                      "never be the same!" << std::endl;
}

const std::string &Sorcerer::getName() const
{
    return name;
}

const std::string &Sorcerer::getTitle() const
{
    return title;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, Sorcerer const &obj)
{
    os << "I am " << obj.getName() << ", " << obj.getTitle() << ", and I "
                                                                  "like "
                                                          "ponies!" <<
                                                          std::endl;
    return (os);
}
