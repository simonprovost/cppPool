
#include <iostream>
#include <stdexcept>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)
try :  _api(input, output) {
} catch(const std::exception& e) {
    throw CommunicationError("Error: " + (std::string)e.what());
}

CommunicationDevice::~CommunicationDevice()
{
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    try {
        for (size_t i = 0; i < nbUsers; ++i)
            _api.addUser(users[i]);
        _api.startMission(missionName);

    } catch (const std::logic_error &e) {
        throw CommunicationError("LogicError: " + (std::string)e.what());
    } catch (const std::runtime_error &e) {
        throw CommunicationError("RuntimeError: " + (std::string)e.what());
    } catch (const std::exception &e) {
        throw CommunicationError("Error: " + (std::string)e.what());
    }
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try {
        _api.sendMessage(user, message);
    } catch (const std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }
}

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try {
        _api.receiveMessage(user, message);
    } catch (const std::invalid_argument &e) {
        message = "INVALID MESSAGE";
        std::cerr << e.what() << std::endl;
    } catch (const std::runtime_error &e) {
        message = "INVALID MESSAGE";
        std::cerr << e.what() << std::endl;
    }
}
