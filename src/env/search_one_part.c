/*
** EPITECH PROJECT, 2023
** get_env.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char *get_env(char **env, char *word)
{
    int i = 0;

    for (; env[i]; i++)
        if (my_strcmp(word, env[i]) == 0)
            return env[i];
    return NULL;
}
