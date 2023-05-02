/*
** EPITECH PROJECT, 2023
** search_element_in_env.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char *get_env_ll(chain_t *chain, char *word)
{
    for (; chain; chain = chain->next)
        if (my_strcmp(word, chain->lines_env) == 0)
            return chain->lines_env;
    return NULL;
}
