/*
** EPITECH PROJECT, 2023
** exec_unsetenv.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int exec_unsetenv(chain_t *chain, info_env_t *info)
{
    if (info->command[1] == NULL) {
        write(2, "unsetenv: Too few arguments.\n", 29);
        return 1;
    } else if (info->command[2] != NULL) {
        for (int i = 1; info->command[i] != NULL; i++)
            search_if_line_exist(chain, info->command[i]);
        return 0;
    } else {
        search_if_line_exist(chain, info->command[1]);
        return 0;
    }
}
