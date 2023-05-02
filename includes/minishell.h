/*
** EPITECH PROJECT, 2023
** minishell.h
** File description:
** By Arthur M-D
*/

#ifndef MINISHELL_H_
    #define MINISHELL_H_
    #define UNUSED __attribute__((unused))

    #include <string.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/wait.h>
    #include <errno.h>
    #include <stdio.h>

    typedef struct chain_s {
        char *lines_env;
        struct chain_s *next;
        struct chain_s *prev;
    } chain_t;

    typedef struct info_env_s {
        char **path;
        char **command;
        char *execute;
        char **env;
        int ret;
    } info_env_t;

    /* body_minishell */
    int create_minishell_informations(char **env);
    int execute_command(info_env_t *info, chain_t *chain);

    /* cd_command */
    int choose_just_cd(chain_t *chain);
    int exec_cd_with_one_arg(chain_t *chain, info_env_t *info);
    int cd_with_dashe(chain_t *chain);
    int exec_cd_for_user(chain_t *chain);
    int exec_cd_for_home(chain_t *chain);
    int save_pwd(chain_t *chain, char *oldpwd, char *cwd);
    int search_cd_command(info_env_t *info, chain_t *chain);
    int search_just_cd(char **array, chain_t *chain);
    char **search_pwd(chain_t *chain);

    /* child */
    int create_child(info_env_t *info);

    /* env */
    char **create_env_informations(char **env, info_env_t *env_info);
    int print_env(chain_t *chain);
    char *get_env_ll(chain_t *chain, char *word);
    char **create_env(char **env);
    char *get_env(char **env, char *word);

    /* lib_for_minishell */
    void my_putchar(char c);
    int my_putstr(char const *str);
    char **my_str_to_word_array(char *buffer, char c);
    char *my_strcat(char *dest, char const *src);
    int my_strcmp_exactly(char *word, char *comparator);
    int my_strcmp(char *word, char *comparator);
    char *my_strdup(char *data);
    int my_strlen(char const *str);

    /* linked_list */
    chain_t *create_head(char *line_env);
    void create_list(char *data, chain_t *head);
    chain_t *env_in_list(char **env);
    int search_position(chain_t *element);
    char *search_element_in_ll(chain_t *chain, char *search);

    /* remove_part */
    char *remove_end(char *str);
    char *remove_start(char *str, char *delete);

    /* search_if_line_already_exist */
    int search_if_line_exist(chain_t *chain, char *line);

    /* setenv */
    int add_to_env_one_info(chain_t *chain, info_env_t *info);
    int add_to_env_line(chain_t *chain, info_env_t *info);
    int search_setenv_command(chain_t *chain, info_env_t *info);

    /* unsetenv */
    int exec_unsetenv(chain_t *chain, info_env_t *info);

#endif /* MINISHELL_H_ */
