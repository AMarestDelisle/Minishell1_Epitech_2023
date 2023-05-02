/*
** EPITECH PROJECT, 2023
** remove_end.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char *remove_end(char *str)
{
    int length = my_strlen(str) - 1;
    char *new_str = malloc(sizeof(char) * (length + 1));

    if (new_str == NULL || str == NULL)
        return NULL;
    new_str[length] = '\0';
    for (int i = 0; i < length; i++) {
        new_str[i] = str[i];
    }
    return new_str;
}
