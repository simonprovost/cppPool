/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_CHARACTER_HPP
#define DAY_CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Character {

    public:

    Character(const std::string &name);

    ~Character();

    AWeapon *getWeaponPointer() const
    {
        return this->_weapon != nullptr ? this->_weapon : nullptr;
    }

    int getAp() const
    {
        return (this->_ap);
    }

    const std::string getName() const
    {
        return (this->_name);
    }

    void attack(AEnemy *enemy);

    void equip(AWeapon *weapon)
    {
        this->_weapon = weapon;
    }

    void recoverAP();

    private:

    const std::string _name;
    int _ap;
    AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &os, Character &character);

#endif //DAY_CHARACTER_HPP
