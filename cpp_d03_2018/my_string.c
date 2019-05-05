/*
** EPITECH PROJECT, 2018
** string
** File description:
** .c
*/

#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
#include "string.h"
#include "aff.c"
#include "append.c"
#include "assign.c"
#include "at.c"
#include "clear.c"
#include "compare.c"
#include "copy.c"
#include "cstr.c"
#include "empty.c"
#include "find.c"
#include "insert.c"
#include "size.c"
#include "split.c"
#include "toint.c"

void init_pointer_func(string_t *this, const char *s)
{
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
    this->clear = &clear;
    this->size = &size;
    this->compare_c = &compare_c;
    this->compare_s = &compare_s;
    this->copy = &copy;
    this->c_str = &c_str;
    this->empty = &empty;
    this->find_s = &find_s;
    this->find_c = &find_c;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
    this->split_c = &split_c;
    this->split_s = &split_s;
    this->aff = &aff;
}

void string_init(string_t *this , const char *s)
{
    if (!s)
        (this) ? (this->str = NULL) : 0;
    else
        if (this) {
            this->str = NULL;
            this->str = strdup((char *)s);
        }
    init_pointer_func(this, s);
}

void string_destroy(string_t *this)
{
    if (this->str == NULL)
        return;
    free(this->str);
    this->str = NULL;
}