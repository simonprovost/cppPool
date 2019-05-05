/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_ISPACEMARINE_HPP
#define DAY_ISPACEMARINE_HPP

class ISpaceMarine {
    public :
    virtual ~ ISpaceMarine () {}
    virtual ISpaceMarine * clone () const = 0;
    virtual void battleCry () const = 0;
    virtual void rangedAttack () const = 0;
    virtual void meleeAttack () const = 0;
};

#endif //DAY_ISPACEMARINE_HPP
