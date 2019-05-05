/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_TOYSTORY_HPP
#define DAY_TOYSTORY_HPP

#include "Toy.hpp"

class ToyStory {
    private:

    protected:

    public:
    static void tellMeAStory(std::string filename, Toy &toy1,
        bool (Toy::*func1)(const std::string &s1), Toy &toy2, bool (Toy::*func2)
        (const std::string &s2));
};

#endif //DAY_TOYSTORY_HPP
