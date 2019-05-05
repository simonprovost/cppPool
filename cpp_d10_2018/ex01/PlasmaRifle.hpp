/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_PLASMARIFLE_HPP
#define DAY_PLASMARIFLE_HPP

#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
    public:
    PlasmaRifle(std::string const &name = "Plasma Rifle", int apcost = 5, int damage = 21);
    ~PlasmaRifle();
    void	attack() const;
};

#endif //DAY_PLASMARIFLE_HPP
