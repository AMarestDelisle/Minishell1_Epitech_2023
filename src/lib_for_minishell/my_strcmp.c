/*
** EPITECH PROJECT, 2023
** my_strcmp.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int my_strcmp_exactly(char *word, char *comparator)
{
    int word_length = my_strlen(word);
    int comparator_length = my_strlen(comparator);

    if (word_length != comparator_length)
        return 1;
    for (int i = 0; word[i]; i++)
        if (word[i] != comparator[i])
            return 1;
    return 0;
}

int my_strcmp(char *word, char *comparator)
{
    int word_length = my_strlen(word);
    int comparator_length = my_strlen(comparator);

    if (word_length > comparator_length)
        return 1;
    for (int i = 0; word[i]; i++)
        if (word[i] != comparator[i])
            return 1;
    return 0;
}
