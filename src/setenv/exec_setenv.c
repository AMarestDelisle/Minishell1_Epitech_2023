/*
** EPITECH PROJECT, 2023
** exec_setenv.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int add_to_env_one_info(chain_t *chain, info_env_t *info)
{
    char *line_to_add = my_strcat(info->command[1], "=");
    int res = 0;

    if (line_to_add == NULL)
        return 84;
    res = search_if_line_exist(chain, line_to_add);
    create_list(line_to_add, chain);
    return res;
}

int add_to_env_line(chain_t *chain, info_env_t *info)
{
    char *line_to_add = my_strcat(info->command[1], "=");
    int res = 0;

    if (line_to_add == NULL)
        return 84;
    res = search_if_line_exist(chain, line_to_add);
    line_to_add = my_strcat(line_to_add, info->command[2]);
    create_list(line_to_add, chain);
    return res;
}
