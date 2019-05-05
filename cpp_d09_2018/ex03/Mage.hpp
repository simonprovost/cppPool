/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_MAGE_HPP
#define DAY_MAGE_HPP

#include <string>
#include "Character.hpp"


class Mage : public Character {

    public:
    Mage(std::string name, int lvl);
    ~Mage();

    int	CloseAttack();
    int	RangeAttack();
    void RestorePower();
};

#endif //DAY_MAGE_HPP
