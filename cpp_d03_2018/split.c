/*
** EPITECH PROJECT, 2018
** string
** File description:
** .c
*/


#include "string.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>

static void my_append(char **dest, const char *source)
{
    if (!source)
        return;
    if (*dest == NULL)
        *dest = strdup(source);
    else {
        *dest = realloc(*dest, (size_t)(strlen(*dest) + strlen
            (source) + 1));
        *dest = strcat(*dest, source);
    }
}

static size_t count_separator(char **str, char separator)
{
    size_t count = 0;
    char *temp = NULL;

    if (!(*str))
        return (0);
    for (int i = 0 ; (*str)[i] ; i++) {
        if ((*str)[i] == separator && (*str)[i + 1] == separator) {
            temp = strdup((*str) + i + 1);
            (*str)[i + 1] = 'a';
            (*str)[i + 2] = 0;
            my_append(str, temp);
        }
        if ((*str)[i] == separator)
            count++;
    }
    count += 2;
    return (count);
}

static char **split_c(const string_t *this, char separator)
{
    char **res = NULL;
    char *tmp_this_str = NULL;
    char *pattern = NULL;
    char sep[2] = {separator, 0};
    size_t idx = 0;

    tmp_this_str = strdup(this->str);
    if ((res = malloc(sizeof(char *) * count_separator(&tmp_this_str,
        separator))) != NULL)  {
        pattern = strtok(tmp_this_str, sep);
        while (pattern) {
            (pattern[0] == 'a') ? (pattern = strdup("")) : 0;
            *(res + idx++) = strdup(pattern);
            pattern = strtok(0, sep);
        }
        *(res + idx) = 0;
    }
    free (tmp_this_str);
    return (res);
}

static string_t **split_s(const string_t *this, char separator)
{
    string_t **res = NULL;
    char *tmp_this_str = NULL;
    char *pattern = NULL;
    char sep[2] = {separator, 0};
    size_t idx = 0;

    tmp_this_str = strdup(this->str);
    if ((res = malloc(sizeof(string_t *) * count_separator(&tmp_this_str,
        separator))) != NULL)  {
        pattern = strtok(tmp_this_str, sep);
        while (pattern) {
            (pattern[0] == 'a') ? (pattern = strdup("")) : 0;
            res[idx] = malloc(sizeof(string_t));
            string_init((res[idx++]), pattern);
            pattern = strtok(0, sep);
        }
        res[idx] = 0;
    }
    free (tmp_this_str);
    return (res);
}