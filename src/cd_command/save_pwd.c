/*
** EPITECH PROJECT, 2023
** save_pwd.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int save_pwd(chain_t *chain, char *oldpwd, char *cwd)
{
    int res = 0;

    res = search_if_line_exist(chain, "OLDPWD=");
    oldpwd = my_strcat("OLDPWD=", oldpwd);
    create_list(oldpwd, chain);
    if (res == 84)
        return 84;
    res = search_if_line_exist(chain, "PWD=");
    cwd = my_strcat("PWD=", cwd);
    create_list(cwd, chain);
    if (res == 84)
        return 84;
    return 0;
}
