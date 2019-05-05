/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_AWEAPON_HPP
#define DAY_AWEAPON_HPP

#include <string>

class AWeapon {
    public :

        AWeapon(const std::string & name , int apcost , int damage);
        virtual ~AWeapon();
        const std::string &getName() const;

        int getAPCost() const ;
        int getDamage() const ;
        virtual void attack () const = 0;

    protected:

        std::string _name;
        int _damage;
        int _ap;


};

#endif //DAY_AWEAPON_HPP
