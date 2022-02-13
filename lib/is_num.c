/*
** EPITECH PROJECT, 2021
** 105Torus
** File description:
** is_num
*/

int is_num(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] > '9' || str[i] < '0') && str[i] != 10)
            return (84);
    return (1);
}