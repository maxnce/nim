/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** create_struct
*/

#include "matchstick.h"

game_t *create_struct(char **av)
{
    game_t *game = malloc(sizeof(game_t));

    game->lines = my_getnbr(av[1]);
    game->max = my_getnbr(av[2]);
    game->table = malloc(sizeof(int) * game->lines);
    for (int i = 0; i < game->lines; i++) {
        game->table[i] = (-1 + 2 * (i + 1));
    }
    game->off = game->table[game->lines - 1];
    return (game);
}