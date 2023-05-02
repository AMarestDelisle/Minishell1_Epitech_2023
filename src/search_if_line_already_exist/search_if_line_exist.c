/*
** EPITECH PROJECT, 2023
** search_if_line_exist.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int search_if_line_exist(chain_t *chain, char *line)
{
    chain_t *to_find = chain;
    int res = 0;

    while (to_find) {
        if (my_strcmp(line, to_find->lines_env) == 0) {
            res = search_position(to_find);
            return res;
        } else
            to_find = to_find->next;
    }
    return 0;
}
