/*
** EPITECH PROJECT, 2023
** search_cd_command.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int search_cd_command(info_env_t *info, chain_t *chain)
{
    int i = 0;
    int res = 0;

    for (;info->command[i]; i++);
    if (i > 2) {
        my_putstr("too many arguments\n");
        return 1;
    } else if (i == 1) {
        res = choose_just_cd(chain);
        return res;
    } else {
        res = exec_cd_with_one_arg(chain, info);
        return res;
    }
    return 0;
}
