/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_WOODY_HPP
#define DAY_WOODY_HPP

#include "Toy.hpp"

class Woody : public Toy {

    private:

    protected:

    public:
    Woody();

    Woody(const std::string &, const std::string &filename = "");
    void speak(std::string const &sentence) override;
    bool speak_es(std::string const &sentence) override;

};

#endif //DAY_WOODY_HPP
