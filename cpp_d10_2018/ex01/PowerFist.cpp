/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PowerFist::~PowerFist()
{
}

void	PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}