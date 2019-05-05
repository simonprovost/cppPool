/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_DROIDMEMORY_HPP
#define DAY_DROIDMEMORY_HPP

#include <cstdio>
#include <ostream>

class DroidMemory {
    private:

    size_t FingerPrint;
    size_t Exp;

    public:

    virtual ~DroidMemory();

    DroidMemory();
    void setFingerPrint(size_t FingerPrint);
    size_t getFingerPrint() const;
    void setExp(size_t Exp);
    size_t getExp() const;

    DroidMemory& operator=(DroidMemory const &);
    DroidMemory& operator<<(const DroidMemory& );
    const DroidMemory& operator>>(DroidMemory& ) const;
    DroidMemory& operator+=(size_t const&);
    DroidMemory& operator+=(DroidMemory const &);
    DroidMemory operator +(size_t) const;
    DroidMemory operator + (const DroidMemory& ) const;
};

std::ostream& operator <<(std::ostream& os, DroidMemory const& obj);

#endif //DAY_DROIDMEMORY_HPP
