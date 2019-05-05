/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Character.hpp"

Character::Character(const std::string &_name, int level) : Range(CLOSE),
_name(_name),  _race("Koala"), Class("Character"), _lvl(level),
    _power(100), _pv(100), _strenght(5), _stamina(5),
    _intelligence(5), _spirit(5), _agility(5)
{
    std::cout << this->getName() << " Created" << std::endl;
}


Character::~Character()
{
}

const std::string &Character::getName() const
{
    return _name;
}

const std::string &Character::getRace() const
{
    return _race;
}

int Character::getLvl() const
{
    return _lvl;
}

int Character::getPower() const
{
    return _power;
}

int Character::getPv() const
{
    return _pv;
}

int Character::getStrenght() const
{
    return _strenght;
}

int Character::getStamina() const
{
    return _stamina;
}

int Character::getIntelligence() const
{
    return _intelligence;
}

int Character::getSpirit() const
{
    return _spirit;
}

int Character::getAgility() const
{
    return _agility;
}

const std::string &Character::getClass() const
{
    return Class;
}

int Character::CloseAttack()
{
    if (this->_power < 10) {
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 10;
    this->_power < 0 ? this->_power = 0 : 0;
    std::cout << this->getName() << " strikes with a wooden stick" <<
    std::endl;
    return (10 + this->_strenght);
}

int Character::RangeAttack()
{
    if (this->_power < 10) {
        std::cout << this->getName() << " out of power" << std::endl;
        return (0);
    }
    this->_power -= 10;
    this->_power < 0 ? this->_power = 0 : 0;
    std::cout << this->getName() << " tosses a stone" <<
        std::endl;
    return (5 + this->_strenght);
}

void Character::Heal()
{
    this->_pv += 50;
    this->_pv > 100 ? this->_pv = 100 : 0;
    std::cout << this->getName() << " takes a potion" <<
        std::endl;
}

void Character::RestorePower()
{
    this->_power = 100;
    std::cout << this->getName() << " eats" <<
        std::endl;
}

void Character::TakeDamage(int _damage)
{
    this->_pv -= _damage;
    this->_pv < 0 ? this->_pv = 0 : 0;
    if (this->_pv <= 0) {
        std::cout << this->getName() << " out of combat" << std::endl;
    } else
        std::cout << this->getName() << " takes " << _damage << " damage" <<
            std::endl;
}