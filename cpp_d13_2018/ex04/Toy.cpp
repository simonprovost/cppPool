/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
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
    return (this->picture.getPictureFromFile(FileName));
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
}

Toy &Toy::operator=(const Toy &obj)
{
    this->type = obj.getType();
    this->setName(obj.getName());
    this->picture = obj.picture;
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
