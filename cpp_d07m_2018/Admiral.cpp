/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Admiral.hpp"

Starfleet::Admiral::Admiral(std::string name)
{
    this->_name = name;
    std::cout << "Admiral " << _name << " ready for action." << std::endl;
}

Starfleet::Admiral::~Admiral()
{
}

void Starfleet::Admiral::fire(Federation::Starfleet::Ship *ship,
    Borg::Ship *target)
{
    std::cout << "On order from Admiral " << _name << ":" << std::endl;
    this->firePtr = &Federation::Starfleet::Ship::fire;
    (ship->*firePtr)(target);
}

bool Starfleet::Admiral::move(Federation::Starfleet::Ship *ship,
    Destination d)
{
    this->movePtr = &Federation::Starfleet::Ship::move;
    return (ship->*movePtr)(d);
}
