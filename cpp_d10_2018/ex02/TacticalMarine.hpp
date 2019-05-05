/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_TACTICALMARINE_HPP
#define DAY_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
    public:

    TacticalMarine();

    ~TacticalMarine() override;

    TacticalMarine * clone () const override;
    void battleCry () const override;
    void rangedAttack () const override;
    void meleeAttack () const override;

    private:
};

#endif //DAY_TACTICALMARINE_HPP
