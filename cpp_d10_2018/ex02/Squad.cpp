/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include <algorithm>

int Squad::getCount() const
{
    return static_cast<int>(this->squad.size());
}

ISpaceMarine *Squad::getUnit(int unit_idx)
{
    if (unit_idx < 0 || unit_idx > this->getCount())
        return (nullptr);
    return (this->squad.at(static_cast<unsigned long>(unit_idx)));
}

int Squad::push(ISpaceMarine *elem)
{
    if (!elem || (std::find(this->squad.begin(), this->squad.end(), elem) !=
    this->squad.end()))
        return (0);
    this->squad.push_back(elem);
    return (this->getCount());
}

Squad::Squad()
{
}

Squad &Squad::operator=(Squad const &rhs)
{
    if (!this->squad.empty())
        for (auto &element : this->squad)
            delete element;
    this->squad.resize(rhs.squad.size());
    for(unsigned i = 0; i < rhs.squad.size(); ++i)
        this->squad[i] = rhs.squad[i]->clone();
    return (*this);
}

Squad::Squad(Squad &copied)
{
    this->squad = copied.squad;
}

Squad::~Squad()
{
    if (!this->squad.empty())
        for (auto &element : this->squad)
            delete element;
}
