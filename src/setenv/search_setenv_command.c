/*
** EPITECH PROJECT, 2023
** search_setenv_command.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int search_setenv_command(chain_t *chain, info_env_t *info)
{
    int res = 0;

    if (info->command[1] == NULL) {
        res = print_env(chain);
        return res;
    }
    if (info->command[2] == NULL) {
        res = add_to_env_one_info(chain, info);
        return res;
    }
    if (info->command[3] == NULL) {
        res = add_to_env_line(chain, info);
        return res;
    }
    if (info->command[3] != NULL) {
        write(2, "too many arguments\n", 19);
        return 1;
    }
    return res;
}
