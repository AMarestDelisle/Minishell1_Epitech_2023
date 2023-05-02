/*
** EPITECH PROJECT, 2023
** search_pwd.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char **search_pwd(chain_t *chain)
{
    char *path = search_element_in_ll(chain, "PWD=");
    char **array = NULL;

    if (path == NULL)
        return NULL;
    path = remove_start(path, "PWD=/");
    array = my_str_to_word_array(path, '/');
    return array;
}
