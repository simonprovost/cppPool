/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_FRUIT_HPP
#define DAY_FRUIT_HPP

#include <string>

class Fruit {
    private:
    public:
    bool operator==(const Fruit &rhs) const;

    bool operator!=(const Fruit &rhs) const;

    protected:
    int _vitamin;
    std::string _name;

    public:

    virtual ~Fruit();
    Fruit();
    virtual std::string getName() const = 0;
    int getVitamins() const;


};

#endif //DAY_FRUIT_HPP
