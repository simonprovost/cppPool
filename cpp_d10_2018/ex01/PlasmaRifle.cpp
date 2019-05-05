/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PlasmaRifle::~PlasmaRifle()
{
}

void	PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}