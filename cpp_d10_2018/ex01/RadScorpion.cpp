/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "RadScorpion.hpp"
#include "AEnemy.hpp"

RadScorpion::RadScorpion(int HP, const std::string &type) : AEnemy(HP, type)
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}