/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_BUZZ_HPP
#define DAY_BUZZ_HPP

#include <unordered_set>
#include "Toy.hpp"

class Buzz : public Toy {

    private:

    protected:

    public:
    Buzz(const std::string &, const std::string &filename = "");
    void speak(std::string const  &sentence) override;
};

#endif //DAY_BUZZ_HPP
