/*
** EPITECH PROJECT, 2019
** cpp_d09_2018
** File description: Created on: 10 janv. 2019
** main.cpp
*/

#include <iostream>
#include "Priest.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"

int main() {

    std::cout << "\n--------Character-------\n\n";
    Character adam("Adam", 1);

    adam.TakeDamage(12);
    adam.CloseAttack();
    adam.RangeAttack();
    adam.Heal();
    adam.RestorePower();

    std::cout << "\n--------Warrior-------\n\n";
    Warrior con("Con", 18, "cuillere");

    con.Range = Warrior::RANGE;
    con.TakeDamage(12);
    con.CloseAttack();
    con.RangeAttack();

    if (con.Range == Warrior::CLOSE)
        std::cout << "---tested : Warrior::RangeAttack a bien set sa range a CLOSE\n";
    else
        std::cout << "---tested : Warrior::RangeAttack n'a pas set sa range a CLOSE\n";
    con.Heal();
    con.RestorePower();

    std::cout << "\n--------Mage-------\n\n";

    Mage pute("Pute", 22);

    pute.Range = Mage::CLOSE;

    pute.TakeDamage(12);
    pute.CloseAttack();

    if (pute.Range == Mage::RANGE)
        std::cout << "---tested : Mage::CloseAttack a bien set sa range a RANGE\n";
    else
        std::cout << "---tested : Mage::CloseAttack n'a pas set sa range a RANGE\n";
    pute.RangeAttack();
    pute.Heal();
    pute.RestorePower();

    std::cout << "\n--------Priest-------\n\n";

    Priest couille("Couille", 100);
    couille.Range = Priest::CLOSE;

    couille.TakeDamage(12);
    couille.CloseAttack();
    couille.RangeAttack();


    if (couille.Range == Priest::RANGE)
        std::cout << "---tested : Priest::CloseAttack a bien set sa range a RANGE\n";
    else
        std::cout << "---tested : Priest::CloseAttack n'a pas set sa range a RANGE\n";
    couille.Heal();
    couille.RestorePower();

}