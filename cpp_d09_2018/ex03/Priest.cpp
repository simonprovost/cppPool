/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Priest.hpp"
#include "Mage.hpp"

Priest::Priest(std::string name, int lvl) : Mage(name, lvl)
{
    this->Range = CLOSE;
    this->_name = name;
    this->Class = "Priest";
    this->_race = "Orc";
    this->_lvl = lvl;
    this->_power = 100;
    this->_pv = 100;
    this->_strenght = 4;
    this->_stamina = 4;
    this->_intelligence = 42;
    this->_spirit = 21;
    this->_agility = 2;

    std::cout << this->getName() << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack()
{
    if (this->_power < 10) {
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 10;
    this->_power < 0 ? this->_power = 0 : 0;
    this->Range = RANGE;
    std::cout << this->getName() << " uses a spirit explosion" << std::endl;
    return (10 + this->_spirit);
}


void Priest::Heal()
{
    this->_power -= 10;
    if (this->_power < 10) {
        std::cout << this->getName() << " out of power" << std::endl;
        return;
    }
    this->_power < 0 ? this->_power = 0 : 0;

    this->_pv += 70;
    this->_pv > 100 ? this->_pv = 100 : 0;
    std::cout << this->getName() << " casts a little heal spell" <<
        std::endl;
}
