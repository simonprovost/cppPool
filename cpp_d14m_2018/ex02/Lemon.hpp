/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_LEMON_HPP
#define DAY_LEMON_HPP

#include "Fruit.hpp"

class Lemon : public Fruit {

    private:

    protected:

    public:
    virtual ~Lemon();
    Lemon();
    std::string getName() const override;
};

#endif //DAY_LEMON_HPP
