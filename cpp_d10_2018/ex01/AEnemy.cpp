/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type)
    : _type(type)
{
    this->_hp = hp;
}

const std::string &AEnemy::getType() const
{
    return this->_type;
}

int AEnemy::getHP() const
{
    return this->_hp;
}

void AEnemy::takeDamage(int dmg)
{
    if (dmg > 0)
        this->_hp -= dmg;
}

AEnemy::~AEnemy()
{
}
