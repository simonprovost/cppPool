/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include <cstring>
#include "Toy.hpp"

Toy::ToyType Toy::getType() const
{
    return type;
}

const std::string &Toy::getName() const
{
    return name;
}

const Picture &Toy::getPicture() const
{
    return picture;
}

void Toy::setName(const std::string &name)
{
    Toy::name = name;
}

bool Toy::setAscii(std::string FileName)
{
    if (!this->picture.getPictureFromFile(FileName)) {
        this->obj_err.type = Toy::Error::PICTURE;
        return (false);
    }
    return (true);
}

std::string const Toy::getAscii() const
{
    return (this->picture.getData());
}

Toy::Toy()
{
    this->type = BASIC_TOY;
    this->name = "toy";
    this->picture = Picture();
}

Toy::Toy(Toy::ToyType type, std::string toyName, std::string Filename)
{
    this->type = type;
    this->name = toyName;
    this->picture = Picture(Filename);
}

Toy::~Toy() = default;

Toy::Toy(const Toy &obj)
{
    this->type = obj.getType();
    this->setName(obj.getName());
    this->picture = obj.picture;
    this->obj_err = obj.obj_err;
}

Toy &Toy::operator=(const Toy &obj)
{
    this->type = obj.getType();
    this->setName(obj.getName());
    this->picture = obj.picture;
    this->obj_err = obj.obj_err;

    return *this;
}

void Toy::speak(std::string const &sentence)
{
    std::cout << this->getName() << " \"" << sentence << "\"" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Toy &toy)
{
    std::cout << toy.getName() << std::endl << toy.getAscii() <<
    std::endl;
    return os;
}

Toy &Toy::operator<<(const std::string &s)
{
    this->picture.setData(s);
    return *this;
}

bool Toy::speak_es(std::string const &sentence)
{
    Toy::speak(sentence);
    return (true);
}

Toy::Error Toy::getLastError()
{
    return (this->obj_err);
}

std::string Toy::Error::what() const
{
    if (strcmp(where().data(), "setAscii") == 0) {
        return ("bad new illustration");
    } else if (strcmp(where().data(), "speak_es") == 0){
        return ("wrong mode");
    } else {
        return ("");
    }
}

std::string Toy::Error::where() const
{
    if (this->type == PICTURE) {
        return ("setAscii");
    } else if (this->type == SPEAK) {
        return ("speak_es");
    } else {
        return ("");
    }
}
