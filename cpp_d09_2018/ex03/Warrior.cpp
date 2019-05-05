/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Warrior.hpp"

Warrior::Warrior(std::string name, int lvl, std::string weaponName) :
    Character(name, lvl)
{
    this->Range = CLOSE;
    this->_name = name;
    this->Class = "Warrior";
    this->_race = "Dwarf";
    this->_lvl = lvl;
    this->_power = 100;
    this->_pv = 100;
    this->_strenght = 12;
    this->_stamina = 12;
    this->_intelligence = 6;
    this->_spirit = 5;
    this->_agility = 7;
    this->_weaponName = weaponName;

    std::cout << "I'm " << this->getName() <<
                                               " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" <<
                 std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack()
{
    if (this->_power < 30) {
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 30;
    this->_power < 0 ? this->_power = 0 : 0;
    std::cout << this->getName() << " strikes with his " << this->_weaponName <<
        std::endl;
    return (20 + this->_strenght);
}

int Warrior::RangeAttack()
{
    if (this->_power < 10) {
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 10;
    this->_power < 0 ? this->_power = 0 : 0;
    this->Range = CLOSE;
    std::cout << this->getName() << " intercepts" << std::endl;
    return (0);
}