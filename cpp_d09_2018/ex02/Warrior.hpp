/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_WARRIOR_HPP
#define DAY_WARRIOR_HPP

#include "Character.hpp"

class Warrior: public Character
{
    private:
    std::string	_weaponName;

    public:
    Warrior(std::string name, int lvl, std::string weaponName = "hammer");
    ~Warrior();
    int	CloseAttack();
    int	RangeAttack();
   // virtual void Heal();
   // virtual void RestorePower();
};

#endif //DAY_WARRIOR_HPP
