/*
** EPITECH PROJECT, 2023
** print_env.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int print_env(chain_t *chain)
{
    for (; chain; chain = chain->next) {
        my_putstr(chain->lines_env);
        my_putchar('\n');
    }
    return 0;
}
