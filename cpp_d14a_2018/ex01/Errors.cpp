/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "Errors.hpp"

NasaError::NasaError(const std::string &message, const std::string &component)
{
    this->_message = (message);
    this->_component = (component);
}

std::string const &NasaError::getComponent() const noexcept
{
    return (this->_component);
}

const char *NasaError::what() const noexcept
{
    return (this->_message.c_str());
}

NasaError::~NasaError() noexcept
{
}

MissionCriticalError::MissionCriticalError(std::string const &message,
    const std::string &component
) : NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(std::string const &message,
    const std::string &component
) : NasaError(message, component)
{
}

UserError::UserError(std::string const &message, const std::string &component)
    : NasaError(message, component)
{
}

CommunicationError::CommunicationError(std::string const &message) :
NasaError(message, "CommunicationDevice")
{
}