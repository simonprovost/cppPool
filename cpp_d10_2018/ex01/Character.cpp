/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &name)
    : _name(name), _ap(40)
{
}

Character::~Character()
{
}

void Character::attack(AEnemy *enemy)
{
    if (!enemy)
        return;
    if (this->_weapon != nullptr && this->_weapon->getAPCost() <= this->_ap) {
        std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
        this->_weapon->attack();
        enemy->takeDamage(this->_weapon->getDamage());
        this->_ap -= _weapon->getAPCost();
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

void Character::recoverAP()
{
    this->_ap += 10;

    if (this->_ap > 40)
        this->_ap = 40;
}

std::ostream &operator<<(std::ostream &os, Character &character)
{
    std::string unarmed = " AP and is unarmed";
    std::string armed = " AP and wields a ";

    if (character.getWeaponPointer() == nullptr) {
        os << character.getName() << " has " << character.getAp() << unarmed <<
        std::endl;
    } else {
        os << character.getName() << " has " << character.getAp() << armed <<
            character.getWeaponPointer()->getName() << std::endl;
    }
    return os;
}