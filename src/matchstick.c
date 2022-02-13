/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** matchstick
*/

#include "matchstick.h"

int matchstick(game_t *game)
{
    while (1) {
        disp_table(game);
        if (ia_lose(game) == 0)
            return (1);
        if (player_action(game) == 0)
            return (0);
        disp_table(game);
        if (player_lose(game) == 0)
            return (2);
        ia_play(game);
    }
    return (0);
}