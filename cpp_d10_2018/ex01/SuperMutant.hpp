/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_SUPERMUTANT_HPP
#define DAY_SUPERMUTANT_HPP

#include "AEnemy.hpp"

class SuperMutant : public AEnemy {

    public:
    SuperMutant(int HP = 170, const std::string &type = "Super Mutant");
    ~SuperMutant();

    void takeDamage(int);

    private:

    protected:
};

#endif //DAY_SUPERMUTANT_HPP
