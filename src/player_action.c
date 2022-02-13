/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** player_choice
*/

#include "matchstick.h"

void free_picks(char *line, char *matches)
{
    free(line);
    free(matches);
}

void determine_error(game_t *game, char *matches, int line)
{
    if (my_getnbr(matches) <= 0) {
        pls_remove_matches();
        return ;
    }
    if (my_getnbr(matches) > game->max) {
        pls_less_matches(game);
        return ;
    }
    if (my_getnbr(matches) > game->table[line - 1])
        not_enough_matches();
}

char *choose_matches(game_t *game, char *line)
{
    char *mt = malloc(sizeof(char) * 101);
    size_t size = 50;

    write(1, "Matches: ", 9);
    if (getline(&mt, &size, stdin) == -1)
        return (NULL);
    while (my_getnbr(mt) <= 0 || my_getnbr(mt) > game->max ||
    is_num(mt) == 84 || my_getnbr(mt) > game->table[my_getnbr(line) - 1]) {
        if (is_num(mt) == 84)
            bad_input();
        else
            determine_error(game, mt, my_getnbr(line));
        line = choose_line(game);
        if (line == NULL)
            return (NULL);
        mt = choose_matches(game, line);
        if (mt == NULL)
            return (NULL);
    }
    return (mt);
}

char *choose_line(game_t *game)
{
    char *line = malloc(sizeof(char) * 101);
    size_t size = 50;

    write(1, "Line: ", 6);
    if (getline(&line, &size, stdin) == -1)
        return (NULL);
    while (my_getnbr(line) <= 0 || my_getnbr(line) > game->lines ||
    is_num(line) == 84) {
        if (is_num(line) == 84 || line[0] == 10)
            bad_input();
        else
            bad_value();
        write(1, "Line: ", 6);
        if (getline(&line, &size, stdin) == -1)
            return (NULL);
    }
    return (line);
}

int player_action(game_t *game)
{
    char *line;
    char *matches;
    int b;

    write(1, "\nYour turn:\n", 12);
    line = choose_line(game);
    if (line == NULL)
        return (0);
    matches = choose_matches(game, line);
    if (matches == NULL)
        return (0);
    b = my_getnbr(matches);
    game->table[my_getnbr(line) - 1] -= b;
    write(1, "Player removed ", 15);
    my_put_nbr(b);
    write(1, " match(es) from line ", 21);
    my_put_nbr(my_getnbr(line));
    my_putchar('\n');
    free_picks(line, matches);
    return (1);
}