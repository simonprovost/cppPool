/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_SORCERER_HPP
#define DAY_SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer {
    public:
    virtual ~Sorcerer();

    Sorcerer(const std::string &name, const std::string &title);

    const std::string &getName() const;

    const std::string &getTitle() const;

    void polymorph(const Victim &victim)const;

    protected:

    std::string name;

    std::string title;

    private:


};

std::ostream& operator <<(std::ostream& os, Sorcerer const& obj);

#endif //DAY_SORCERER_HPP
