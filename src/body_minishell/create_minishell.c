/*
** EPITECH PROJECT, 2023
** create_minishell.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

void put_exit_or_not(int ret_value)
{
    if (ret_value == -1 && isatty(0) == 1)
        my_putstr("exit\n");
}

int create_prompt_command(info_env_t *info, chain_t *chain)
{
    char *lineptr = NULL;
    size_t n = 0;
    int return_value = 0;

    while (1) {
        if (isatty(0) == 1)
            my_putstr("$> ");
        return_value = getline(&lineptr, &n, stdin);
        if (return_value == -1) {
            put_exit_or_not(return_value);
            return 0;
        }
        lineptr = remove_end(lineptr);
        if (lineptr == NULL || lineptr[0] == '\0')
            continue;
        info->command = my_str_to_word_array(lineptr, ' ');
        info->ret = execute_command(info, chain);
    }
    return info->ret;
}

int create_minishell_informations(char **env)
{
    chain_t *chain = NULL;
    info_env_t *env_info = malloc(sizeof(info_env_t));
    int result = 0;

    if (create_env_informations(env, env_info) == NULL) {
        write(2, "Error with read env\n", 20);
        return 84;
    }
    chain = env_in_list(env_info->env);
    result = create_prompt_command(env_info, chain);
    return result;
}
