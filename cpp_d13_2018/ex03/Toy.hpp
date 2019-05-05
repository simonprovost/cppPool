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
        BUZZ,
        WOODY,
    };

    private:
    std::string name;
    Picture picture;

    protected:

    ToyType type;

    public:
    Toy();
    virtual ~Toy();
    Toy(ToyType, std::string, std::string);
    Toy& operator=(const Toy&);
    Toy (const Toy&);

    //getter
    ToyType getType() const;
    const std::string &getName() const;
    const Picture &getPicture() const;
    std::string const getAscii() const;

    //setter
    void setName(const std::string &name);
    bool setAscii(std::string FileName);

     //method
    virtual void speak(std::string const &sentence);

};

#endif //DAY_TOY_HPP
