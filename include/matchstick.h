/*
** EPITECH PROJECT, 2021
** matchstick
** File description:
** matchstick
*/

#ifndef MATCHSTICK_H_
#define MATCHSTICK_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

typedef struct game_s {
    int lines;
    int max;
    int off;
    int *table;
} game_t;

//lib
int is_num(char *str);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);

//src
int verif_args(int ac, char **av);
game_t *create_struct(char **av);
int matchstick(game_t *game);
int disp_table(game_t *game);
int player_action(game_t *game);
int player_lose(game_t *game);
int ia_play(game_t *game);
int ia_lose(game_t *game);
char *choose_line(game_t *game);

//err
void bad_value(void);
void bad_input(void);
void pls_remove_matches(void);
void pls_less_matches(game_t *game);
void not_enough_matches(void);

#endif /* !MATCHSTICK_H_ */