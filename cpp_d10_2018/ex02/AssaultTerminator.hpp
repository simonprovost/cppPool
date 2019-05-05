/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_ASSAULTTERMINATOR_HPP
#define DAY_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

    public:

    AssaultTerminator();

    ~AssaultTerminator() override;

    AssaultTerminator * clone () const override;
    void battleCry () const override;
    void rangedAttack () const override;
    void meleeAttack () const override;

    private:

};

#endif //DAY_ASSAULTTERMINATOR_HPP
