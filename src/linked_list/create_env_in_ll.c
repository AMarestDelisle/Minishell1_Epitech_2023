/*
** EPITECH PROJECT, 2023
** create_env_in_ll.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

chain_t *env_in_list(char **env)
{
    chain_t *element = NULL;

    element = create_head(env[0]);
    for (int i = 1; env[i]; i++)
        create_list(env[i], element);
    return element;
}
