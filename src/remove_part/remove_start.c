/*
** EPITECH PROJECT, 2023
** remove_start.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char *remove_start(char *str, char *delete)
{
    char *final_str = NULL;
    int str_length = my_strlen(str);
    int delete_length = my_strlen(delete);
    int j = 0;

    if (delete_length >= str_length)
        return NULL;
    final_str = malloc(sizeof(char) * (str_length - delete_length + 1));
    if (final_str == NULL)
        return NULL;
    for (int i = delete_length; str[i]; i++, j++)
        final_str[j] = str[i];
    final_str[j] = '\0';
    return final_str;
}
