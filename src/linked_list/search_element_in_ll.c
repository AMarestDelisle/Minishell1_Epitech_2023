/*
** EPITECH PROJECT, 2023
** search_element_in_ll.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char *search_element_in_ll(chain_t *chain, char *search)
{
    chain_t *to_find = chain;

    for (; to_find; to_find = to_find->next)
        if (my_strcmp(to_find->lines_env, search) == 0)
            return to_find->lines_env;
    return NULL;
}
