/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** disp_table
*/

#include "matchstick.h"

int disp_table(game_t *game)
{
    int j = 0;

    for (int i = 0; i < game->off + 2; i++)
        my_putchar('*');
    my_putchar('\n');
    for (int i = 0; i < game->lines; i++) {
        my_putchar('*');
        for (int z = game->off / 2; z > (-1 + 2 * (i + 1)) / 2; z--)
            my_putchar(' ');
        for (j = 0; j < game->table[i]; j++) {
            my_putchar('|');
        }
        for (j += ((game->off - (-1 + 2 * (i + 1))) / 2); j < game->off; j++)
            my_putchar(' ');
        write(1, "*\n", 2);
    }
    for (int i = 0; i < game->off + 2; i++)
        my_putchar('*');
    my_putchar('\n');
    return (0);
}