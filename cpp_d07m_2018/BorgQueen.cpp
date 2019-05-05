/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "BorgQueen.hpp"

Borg::BorgQueen::BorgQueen()
{
    this->firePtr = &Borg::Ship::fire;
    this->movePtr = &Borg::Ship::move;
    this->destroyPtr = &Borg::Ship::fire;
}

Borg::BorgQueen::~BorgQueen()
{
}


void Borg::BorgQueen::fire(Borg::Ship *ship,
    Federation::Starfleet::Ship *target)
{
    (ship->*firePtr)(target);
}

void Borg::BorgQueen::destroy(Borg::Ship *ship, Federation::Ship *target)
{
    (ship->*destroyPtr)(target);
}

bool Borg::BorgQueen::move(Borg::Ship *ship, Destination dest)
{
    return (ship->*movePtr)(dest);
}