/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ex00.h"

static void koala_initializer(koala_t *this, char *_name, char _is_A_Legend)
{
    this->m_parent = *(new_cthulhu());
    this->m_parent.m_name = strdup(_name);
    if (_is_A_Legend == 1) {
        this->m_parent.m_power = 42;
    } else {
        this->m_parent.m_power = 0;
    }
    this->m_is_a_legend = _is_A_Legend;
    printf("Building %s\n", this->m_parent.m_name);
}

static void cthulhu_initializer(cthulhu_t *this)
{
    if (!this)
        return;
    this->m_name = strdup("Cthulhu");
    this->m_power = 42;
    printf("----\n");
    printf("Building Cthulhu\n");
}

cthulhu_t *new_cthulhu()
{
    cthulhu_t *this = malloc(sizeof(*this));

    cthulhu_initializer(this);
    return (this);
}

void print_power(cthulhu_t *this)
{
    if (!this)
        return;
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (!this)
        return;
    if (this->m_power >= 42) {
        printf("%s attacks and destroys the city\n", this->m_name);
        this->m_power -= 42;
    } else
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void sleeping(cthulhu_t *this)
{
    if (!this)
        return;
    printf("%s sleeps\n", this->m_name);
    this->m_power += 42000;
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *this = malloc(sizeof(koala_t));

    koala_initializer(this, name, is_a_legend);
    return (this);
}

void eat(koala_t *this)
{
    if (!this)
        return;
    this->m_parent.m_power += 42;
    printf("%s eats\n", this->m_parent.m_name);

}
