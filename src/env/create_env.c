/*
** EPITECH PROJECT, 2023
** create_env.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

char **create_env_informations(char **env, info_env_t *env_info)
{
    char *path;

    env_info->env = create_env(env);
    if (env_info->env == NULL)
        return NULL;
    path = get_env(env_info->env, "PATH=");
    if (path == NULL)
        return NULL;
    path = remove_start(path, "PATH=");
    if (path == NULL)
        return NULL;
    env_info->path = my_str_to_word_array(path, ':');
    if (env_info->path == NULL)
        return NULL;
    return env_info->path;
}
