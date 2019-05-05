/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include "FruitBox.hpp"

// ##################################### LIST###################

unsigned int list_get_size(FruitNode *list)
{
    if (!list)
        return 0;
    return 1 + list_get_size(list->next);
}

bool list_is_empty(FruitNode *list)
{
    return !list;
}

// ##################################### LIST###################

int FruitBox::nbFruits() const
{
    return (this->_nbFruits);
}

FruitBox::FruitBox(int size)
{
    this->_size = size;
    this->_nbFruits = 0;
    this->list = nullptr;
}

FruitBox::~FruitBox() = default;

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode	*tmp;
    FruitNode	*elem;
    int	nb = 1;

    if (nb > _size)
        return (false);
    if (!list) {
        list = new FruitNode;
        list->fruit = f;
        list->next = nullptr;
        this->_nbFruits++;
        return (true);
    }
    tmp = list;
    while (tmp->next != nullptr) {
        if ((tmp->fruit == f) || (nb >= _size))
            return (false);
        nb++;
        tmp = tmp->next;
    }
    if (nb >= _size || tmp->fruit == f)
        return (false);
    this->_nbFruits++;
    elem = new FruitNode;
    elem->fruit = f;
    elem->next = nullptr;
    tmp->next = elem;
    return (true);
}

Fruit *FruitBox::pickFruit()
{
    FruitNode *tmp;

    if (list == nullptr)
        return (nullptr);
    tmp = list;
    list = list->next;
    this->_nbFruits -= 1;
    return tmp->fruit;
}

FruitNode *FruitBox::head() const
{
    if (list_is_empty(list))
        return (nullptr);
    return this->list;
}

int FruitBox::getSize() const
{
    return _size;
}
