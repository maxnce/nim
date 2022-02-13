/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** main
*/

#include "matchstick.h"

int main(int ac, char **av)
{
    if (verif_args(ac, av) == 84)
        return (84);
    return (matchstick(create_struct(av)));
}