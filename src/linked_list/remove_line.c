/*
** EPITECH PROJECT, 2023
** remove_line.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int delete_head(chain_t *element)
{
    element->next->prev = NULL;
    free(element);
    return 0;
}

int delete_tail(chain_t *element)
{
    element->prev->next = NULL;
    free(element);
    return 0;
}

int delete_line_middle(chain_t *element)
{
    element->next->prev = element->prev;
    element->prev->next = element->next;
    free(element);
    return 0;
}

int search_position(chain_t *element)
{
    if (element->prev == NULL)
        return delete_head(element);
    else if (element->next == NULL)
        return delete_tail(element);
    else
        return delete_line_middle(element);
}
