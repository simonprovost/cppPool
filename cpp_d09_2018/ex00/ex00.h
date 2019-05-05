/*
** EPITECH PROJECT, 2018
** //name_project
** File description:
** //todo
*/

#ifndef DAY_EX00_H
#define DAY_EX00_H

typedef struct s_cthulhu cthulhu_t;

typedef struct s_cthulhu {
    int m_power;
    char *m_name;
} cthulhu_t ;

cthulhu_t *new_cthulhu();
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);

typedef struct s_koala koala_t;

typedef struct s_koala {
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t ;

koala_t *new_koala(char *name, char is_a_legend);
void eat(koala_t *this);

#endif //DAY_EX00_H
