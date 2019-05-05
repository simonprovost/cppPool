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

bool check_if_instance_exist(Fruit *f, FruitNode *list)
{
    FruitNode *tmp = list;

    if (!f || !list)
        return (false);
    while (tmp != nullptr) {
        if (tmp->fruit == f)
            return true;
        tmp = tmp->next;
    }
    return (false);
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

FruitBox::~FruitBox()
{
    FruitNode *current = this->list;
    FruitNode *next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    delete this->list;
    this->list = nullptr;
    this->_nbFruits = 0;
}

bool FruitBox::putFruit(Fruit *f)
{
    if (((int)(list_get_size(this->list) + 1) > this->_size) ||
        (check_if_instance_exist(f, this->list)) || !f)
        return (false);

    int size_list = 0;
    FruitNode *temp = nullptr;

    if (list_is_empty(this->list)) {
        this->list = new FruitNode();
        temp = this->list;
        temp->fruit = f;
        temp->next = nullptr;
        this->_nbFruits++;
        return (true);
    }
    size_list = list_get_size(this->list);
    temp = this->list;
    for (int i = 0 ; i < size_list - 1 ; i++)
        temp = temp->next;
    temp->next = new FruitNode();
    temp->next->fruit = f;
    temp->next->next = nullptr;
    this->_nbFruits++;
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

