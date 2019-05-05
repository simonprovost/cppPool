/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "WarpSystem.hpp"

WarpSystem::QuantumReactor::QuantumReactor()
{
    this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor()
{
}

bool WarpSystem::QuantumReactor::isStable()
{
    return (this->_stability);
}

void WarpSystem::QuantumReactor::setStability(bool stability = true)
{
    this->_stability = stability;
}

WarpSystem::Core::Core(WarpSystem::QuantumReactor *reac)
{
    this->_coreReactor = reac;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
    return (this->_coreReactor);
}
