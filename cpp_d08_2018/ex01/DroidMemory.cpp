/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <ostream>
#include "DroidMemory.hpp"

DroidMemory::DroidMemory()
{
    Exp = 0;
    FingerPrint = static_cast<size_t>(random());
}

DroidMemory::~DroidMemory()
{
}

size_t DroidMemory::getFingerPrint() const
{
    return FingerPrint;
}

void DroidMemory::setFingerPrint(size_t FingerPrint)
{
    DroidMemory::FingerPrint = FingerPrint;
}

size_t DroidMemory::getExp() const
{
    return Exp;
}

void DroidMemory::setExp(size_t Exp)
{
    DroidMemory::Exp = Exp;
}

DroidMemory &DroidMemory::operator<<(DroidMemory const& mem)
{
    this->Exp += mem.getExp();
    this->FingerPrint = FingerPrint ^ mem.getFingerPrint();
    return (*this);
}

std::ostream& operator <<(std::ostream& os, DroidMemory const& obj)
{
    os << "DroidMemory '" << obj.getFingerPrint() << "', " << obj.getExp();
    return (os);
}

const DroidMemory &DroidMemory::operator>>(DroidMemory &mem) const
{
    mem.setExp(this->Exp + mem.getExp());
    mem.setFingerPrint(mem.getFingerPrint() ^ this->FingerPrint);
    return (mem);
}

DroidMemory& DroidMemory::operator+=(DroidMemory const& obj) {
    this->Exp += obj.getExp();
    this->FingerPrint = FingerPrint ^ obj.getFingerPrint();
    return *this;
}

DroidMemory& DroidMemory::operator+=(size_t const& value) {
    this->Exp += value;
    this->FingerPrint = FingerPrint ^ value;

    return (*this);
}

DroidMemory DroidMemory::operator+(size_t value) const
{
    DroidMemory temp_mem;

    temp_mem.setExp(this->Exp + value);
    temp_mem.setFingerPrint(this->FingerPrint ^ value);
    return (temp_mem);
}

DroidMemory DroidMemory::operator+(const DroidMemory &obj) const
{
    DroidMemory temp_mem;

    temp_mem.setExp(this->Exp + obj.Exp);
    temp_mem.setFingerPrint(this->FingerPrint ^ obj.FingerPrint);
    return (temp_mem);
}

DroidMemory &DroidMemory::operator=(DroidMemory const &obj)
{
    if (&obj != this) {
        this->FingerPrint = obj.FingerPrint;
        this->Exp = obj.Exp;
    }
    return (*this);
}
