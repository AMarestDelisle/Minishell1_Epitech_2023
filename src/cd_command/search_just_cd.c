/*
** EPITECH PROJECT, 2023
** search_just_cd.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

void return_back(int i)
{
    for (int x = 0; x != i; x++)
        chdir("../");
}

int search_just_cd(char **array, chain_t *chain)
{
    int i = 0;
    int res = 0;

    for (; array[i]; i++);
    if (i == 1)
        res = exec_cd_for_user(chain);
    else if (i == 2)
        res = exec_cd_for_home(chain);
    else
        return_back(i);
    return res;
}
