/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Mage.hpp"
#include "Character.hpp"

Mage::Mage(std::string name, int lvl)  :
    Character(name, lvl)
{
    this->Range = CLOSE;
    this->_name = name;
    this->Class = "Mage";
    this->_race = "Gnome";
    this->_lvl = lvl;
    this->_power = 100;
    this->_pv = 100;
    this->_strenght = 6;
    this->_stamina = 6;
    this->_intelligence = 12;
    this->_spirit = 11;
    this->_agility = 7;

    std::cout << this->getName() << " teleported" << std::endl;
}

int Mage::CloseAttack()
{
    if (this->_power < 10) {
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 10;
    this->_power < 0 ? this->_power = 0 : 0;
    this->Range = RANGE;
    std::cout << this->getName() << " blinks" << std::endl;
    return (0);
}

int Mage::RangeAttack()
{
    if (this->_power < 25) {
        this->_power = 0;
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 25;
    this->_power < 0 ? this->_power = 0 : 0;
    std::cout << this->getName() << " launches a fire ball" << std::endl;
    return (20 + this->_spirit);
}

void Mage::RestorePower()
{
    this->_power = (50 + this->_intelligence) > 100 ? 100 :
        (50 + this->_intelligence);
    std::cout << this->getName() << " takes a mana potion" <<
        std::endl;
}

Mage::~Mage()
{
}
