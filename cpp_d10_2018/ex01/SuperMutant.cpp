/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int HP, const std::string &type)
    : AEnemy(HP, type)
{
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int dmg)
{
    AEnemy::takeDamage(dmg - 3);
}