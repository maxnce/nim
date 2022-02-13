/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** verif_args
*/

#include "matchstick.h"

int verif_args(int ac, char **av)
{
    if (ac != 3)
        return (84);
    if (is_num(av[1]) == 84 || is_num(av[2]) == 84 ||
    my_getnbr(av[1]) <= 0 || my_getnbr(av[2]) <= 0 || my_getnbr(av[1]) > 100)
        return (84);
    return (0);
}