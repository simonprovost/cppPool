/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_ISQUAD_HPP
#define DAY_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad {

    public :
        virtual ~ ISquad(){}
        virtual int getCount() const = 0;
        virtual ISpaceMarine *getUnit(int) = 0;
        virtual int push(ISpaceMarine *) = 0;
};

#endif //DAY_ISQUAD_HPP
