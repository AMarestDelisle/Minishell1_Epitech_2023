/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** By Arthur M-D
*/

#include "minishell.h"

int main(int ac, UNUSED char **av, char **env)
{
    int result;

    if (ac != 1) {
        write(2, "too many command you just need the executable\n", 46);
        return 84;
    } else {
        result = create_minishell_informations(env);
        return result;
    }
}
