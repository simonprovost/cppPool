/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_TOY_HPP
#define DAY_TOY_HPP

#include <string>
#include "Picture.hpp"

class Toy {
    public:
    enum ToyType {
        BASIC_TOY,
        ALIEN,

    };

    private:
        ToyType type;

    private:
    std::string name;
    Picture picture;

    protected:

    public:
    Toy();
    Toy(ToyType, std::string, std::string);

    ToyType getType() const;
    const std::string &getName() const;
    void setName(const std::string &name);
    const Picture &getPicture() const;
    bool setAscii(std::string FileName);
    std::string const getAscii() const;

};

#endif //DAY_TOY_HPP
