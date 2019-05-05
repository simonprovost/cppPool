/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_VICTIM_HPP
#define DAY_VICTIM_HPP

#include <string>

class Victim {

    protected:
    std::string _name;
    public:
    const std::string &getName() const;

    public:
    Victim(const std::string &name);
    ~Victim();

    virtual void getPolymorphed()const;

    private:
};

std::ostream& operator <<(std::ostream& os, Victim const& obj);


#endif //DAY_VICTIM_HPP
