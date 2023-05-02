/*
** EPITECH PROJECT, 2023
** create_element_in_list.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

chain_t *create_head(char *line_env)
{
    chain_t *start = malloc(sizeof(chain_t));

    start->lines_env = my_strdup(line_env);
    start->next = NULL;
    start->prev = NULL;
    return start;
}

void create_list(char *data, chain_t *head)
{
    chain_t *chain = malloc(sizeof(chain_t));

    for (;head->next != NULL; head = head->next);
    chain->prev = head;
    head->next = chain;
    chain->lines_env = my_strdup(data);
    chain->next = NULL;
}
