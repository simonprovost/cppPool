/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_PRIEST_HPP
#define DAY_PRIEST_HPP

#include "Mage.hpp"

class Priest : public Mage {
    public:
    Priest(std::string name, int lvl);
    ~Priest();

    int	CloseAttack();
    void Heal();
};

#endif //DAY_PRIEST_HPP
