/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** error_msg
*/

#include "matchstick.h"

void bad_value(void)
{
    write(1, "Error: this line is out of range\n", 33);
}

void bad_input(void)
{
    write(1, "Error: invalid input (positive number expected)\n", 48);
}

void pls_remove_matches(void)
{
    write(1, "Error: you have to remove at least one match\n", 45);
}

void pls_less_matches(game_t *game)
{
    write(1, "Error: you cannot remove more than ", 35);
    my_put_nbr(game->max);
    write(1, " matches per turn\n", 18);
}

void not_enough_matches(void)
{
    write(1, "Error: not enough matches on this line\n", 39);
}