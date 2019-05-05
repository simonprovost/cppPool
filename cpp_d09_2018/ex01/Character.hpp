/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_CHARACTER_HPP
#define DAY_CHARACTER_HPP

#include <string>

class Character {

    public:
    enum AttackRange
    {
        CLOSE,
        RANGE
    };
    AttackRange Range;


    protected:
    std::string _name;
    std::string _race;
    std::string Class;

    protected:
    int _lvl;
    int _power;
    int _pv;

    int _strenght;
    int _stamina;
    int _intelligence;
    int _spirit;
    int _agility;


    public:
    Character(const std::string &_name, int level);
    ~Character();

    const AttackRange &getRange() const;
    const std::string &getName() const;
    const std::string &getRace() const;
    const std::string &getClass() const;
    int getLvl() const;
    int getPower() const;
    int getPv() const;
    int getStrenght() const;
    int getStamina() const;
    int getIntelligence() const;
    int getSpirit() const;
    int getAgility() const;

    int CloseAttack();
    int RangeAttack();
    void Heal();
    void RestorePower();
    void TakeDamage(int _damage);
};

#endif //DAY_CHARACTER_HPP
