/*
** EPITECH PROJECT, 2023
** search_env.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int count_letters(char *env)
{
    int i = 0;

    for (; env[i] != '\0'; i++);
    return i + 1;
}

char **create_env(char **env)
{
    char **array_env;
    int i = 0;
    int y = 0;

    for (; env[i]; i++);
    array_env = malloc(sizeof(char *) * (i + 1));
    if (array_env == NULL)
        return NULL;
    array_env[i] = NULL;
    for (int x = 0; x < i; x++) {
        array_env[x] = malloc(sizeof(char) * (count_letters(env[x])));
        if (array_env[x] == NULL)
            return NULL;
        for (; env[x][y] != '\0'; y++)
            array_env[x][y] = env[x][y];
        array_env[x][y] = '\0';
        y = 0;
    }
    return array_env;
}
