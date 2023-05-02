/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** By Arthur M-D
*/

//#include "minishell.h"

int my_strlen(char const *str)
{
    int i = 0;
    int counter = 0;

    while (str[i] != '\0') {
        i++;
        counter++;
    }
    return counter;
}
