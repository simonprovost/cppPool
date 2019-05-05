/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_RADSCORPION_HPP
#define DAY_RADSCORPION_HPP

#include <string>
#include "AEnemy.hpp"

class RadScorpion : public AEnemy {

    public:
    RadScorpion(int HP = 80, const std::string &type = "RadScorpion");
    ~RadScorpion();

    protected:

    private:
};

#endif //DAY_RADSCORPION_HPP
