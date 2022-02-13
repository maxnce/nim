/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** ia_play
*/

#include "matchstick.h"

int ia_play(game_t *game)
{
    int line;
    int matches;

    write(1, "\nAI's turn ...\n", 15);
    srandom(time(NULL));
    line = random() % game->lines;
    while (game->table[line] == 0)
        line = random() % (game->lines);
    matches = (game->max > 1) ? random() % (game->max) + 1 : 1;
    while (matches > game->table[line])
        matches = random() % (game->max) + 1;
    game->table[line] -= matches;
    write(1, "AI removed ", 11);
    my_put_nbr(matches);
    write(1, " match(es) from line ", 21);
    my_put_nbr(line + 1);
    my_putchar('\n');
    return (0);
}