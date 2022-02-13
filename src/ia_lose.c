/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** ia_lose
*/

#include "matchstick.h"

int ia_lose(game_t *game)
{
    for (int i = 0; i < game->lines; i++) {
        if (game->table[i] != 0)
            return (1);
    }
    write(1, "I lost... snif... but I'll get you next time!!\n", 48);
    free(game->table);
    free(game);
    return (0);
}