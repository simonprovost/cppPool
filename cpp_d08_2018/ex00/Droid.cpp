/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <iostream>
#include "Droid.hpp"

Droid::Droid() : Energy(50), Attack(25), Toughness(15), Status(new
std::string("Standing by"))
{
    std::cout << "Droid '" << this->Id <<"' Activated" << std::endl;
}

Droid::Droid(Droid const &droid) : Id(droid.getId()), Energy(droid.getEnergy()), Attack(25), Toughness(15), Status(new std::string(*droid.getStatus()))
{
    std::cout << "Droid '" << this->Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    delete this->Status;
    std::cout << "Droid '" << this->Id << "' Destroyed" << std::endl;
}

Droid::Droid(std::string id) : Energy(50), Attack(25), Toughness(15), Status(new
    std::string("Standing by"))
{
    this->Id = id;
    std::cout << "Droid '" << Id << "' Activated" << std::endl;
}

std::string Droid::getId() const
{
    return std::__cxx11::string(this->Id);
}

void Droid::setId(std::string Id)
{
    this->Id = Id;
}

size_t Droid::getEnergy() const
{
    return (this->Energy);
}

void Droid::setEnergy(size_t Energy)
{
    if (Energy > 100) {
        this->Energy = 100;
    } else {
        this->Energy = Energy;
    }
}

std::string *Droid::getStatus() const
{
    return (this->Status);
}

void Droid::setStatus(std::string *status)
{
    this->Status = status;
}

size_t Droid::getAttack() const
{
    return (this->Attack);
}

size_t Droid::getToughness() const
{
    return (this->Toughness);
}

bool Droid::operator==(Droid const &obj) const
{
    if (this->Id == obj.getId() && *this->Status == *obj.getStatus() && this->Energy == obj.getEnergy())
        return (true);
    return (false);
}

bool Droid::operator!=(Droid const &obj) const
{
    return (this->Id != obj.getId() || *this->Status != *obj.getStatus() || this->Energy != obj.getEnergy());
}

Droid &Droid::operator<<(size_t &reload)
{
    size_t res;

    if (this->Energy >= 100) {
        this->Energy = 100;
        return (*this);
    } else if (this->Energy + reload >= 100) {
        res = 100 - this->Energy;
    } else {
        res = reload;
    }
    this->Energy += res;
    reload -= res;
   return (*this);
}

Droid &Droid::operator=(Droid const &obj)
{
    if (obj == *this)
        return (*this);
    this->Id = obj.getId();
    if (this->Status)
     delete this->Status;
    this->Status = new std::string(*obj.getStatus());
    return (*this);
}

std::ostream& operator <<(std::ostream& os, Droid const& obj)
{
    os << "Droid '" << obj.getId() << "', " << *obj.getStatus() << ", " << obj.getEnergy();
    return (os);
}