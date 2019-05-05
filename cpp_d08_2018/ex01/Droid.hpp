/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_DROID_HPP
#define DAY_DROID_HPP

#include <string>
#include "DroidMemory.hpp"

class Droid {
    public:

    virtual ~Droid();

    explicit Droid(std::string name = "");
    Droid(Droid const &);

    /* setter && guetter */

    std::string getId() const;
    void        setId(std::string);
    size_t      getEnergy() const;
    void        setEnergy(size_t);
    std::string *getStatus() const;
    void        setStatus(std::string *);
    size_t      getAttack() const;
    size_t      getToughness() const;

    /* OPERATOR FUNC */

    Droid &operator=(Droid const &obj);
    bool operator==(Droid const &) const;
    bool operator!=(Droid const &) const;
    Droid& operator<<(size_t &);

    private:
    std::string Id;
    size_t Energy;
    const size_t Attack;
    const size_t Toughness;
    std::string *Status;
    DroidMemory * BattleData;
    public:
    void setBattleData(DroidMemory *BattleData);

    public:
    DroidMemory *getBattleData() const;
};

std::ostream& operator <<(std::ostream& os, Droid const& obj);

#endif //DAY_DROID_HPP
