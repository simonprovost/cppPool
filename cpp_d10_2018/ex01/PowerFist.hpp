/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_POWERFIST_HPP
#define DAY_POWERFIST_HPP

#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
    public:
    PowerFist(std::string const &name = "Power Fist", int apcost = 8, int damage = 50);
    ~PowerFist();
    void attack() const;
};

#endif //DAY_POWERFIST_HPP
