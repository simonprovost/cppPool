/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <string>
#include <iostream>
#include "Borg.hpp"

Borg::Ship::~Ship()
{
}

Borg::Ship::Ship(int weaponFrequency, short repair)
{
    this->_side = 300;
    this->_maxWarp = 9;
    this->_home = UNICOMPLEX;
    this->_location = this->_home;
    this->_weaponFrequency = weaponFrequency;
    this->_repair = repair;
    this->_shield = 100;
    this->core = nullptr;

    std::cout << "We are the Borgs. Lower your shields and surrender "
                 "yourselves unconditionally.\n"
                 "Your biological characteristics and technologies will be "
                 "assimilated.\n"
                 "Resistance is futile." << std::endl;
}



void Borg::Ship::setupCore(WarpSystem::Core *sys_core)
{
    this->core = sys_core;
    core->checkReactor()->setStability(true);
}

void Borg::Ship::checkCore()
{
    std::string s;

    (this->core->checkReactor()->isStable()) ? (s = "Everything is in order"
                                                    ".") : (s = "Critical "
                                                                 "failure "
                                                                 "imminent");
    std::cout << s << std::endl;
}

bool Borg::Ship::move(int warp, Destination d)
{
    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(int warp)
{
    Destination d = this->_location;

    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move(Destination d)
{
    int warp = this->_maxWarp;

    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}

bool Borg::Ship::move()
{
    int warp = this->_maxWarp;
    Destination d = this->_location;

    if ((warp <= _maxWarp) && (d != _location) && (core->checkReactor()
        ->isStable())) {
        this->_maxWarp = static_cast<short>(warp);
        this->_location = d;
        return (true);
    }
    return (false);
}



int Borg::Ship::getShield()
{
    return (this->_shield);
}

void Borg::Ship::setShield(int shield)
{
    this->_shield = shield;
}

int Borg::Ship::getWeaponFrequency()
{
    return (this->_weaponFrequency);
}

void Borg::Ship::setWeaponFrequency(int frequency)
{

    this->_weaponFrequency = frequency;
}

short Borg::Ship::getRepair()
{
    return (this->_repair);
}

void Borg::Ship::setRepair(short repair)
{
    this->_repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    target->setShield(this->getShield() - this->_weaponFrequency);
    std::cout << "Firing on target with " << this->_weaponFrequency
    << "GW frequency.";
}

void Borg::Ship::fire(Federation::Ship *target)
{
    target->core->checkReactor()->setStability(false);
    std::cout << "Firing on target with " << this->_weaponFrequency
        << "GW frequency.";
}

void Borg::Ship::repair()
{
    if (this->_repair > 0) {
        _repair -= 1;
        this->_shield = 100;
        std::cout <<
        "Begin shield re-initialisation..."
        " Done. Awaiting further instructions." << std::endl;
    } else {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}
