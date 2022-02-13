/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** player_lose
*/

#include "matchstick.h"

int player_lose(game_t *game)
{
    for (int i = 0; i < game->lines; i++) {
        if (game->table[i] != 0)
            return (1);
    }
    write(1, "You lost, too bad...\n", 22);
    free(game->table);
    free(game);
    return (0);
}