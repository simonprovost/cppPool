/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "AWeapon.hpp"

const std::string &AWeapon::getName() const
{
    return _name;
}

int AWeapon::getDamage() const
{
    return _damage;
}

int AWeapon::getAPCost() const
{
    return _ap;
}

void attack()
{

}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name
(name), _damage(damage), _ap(apcost)
{
}
