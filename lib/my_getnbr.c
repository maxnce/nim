/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** string into int
*/

int check_ok(char const *str, int value, int i, int count)
{
    int sign = 0;

    if (count%2 != 0)
        sign = -1;
    if (value >= 1000000000 && (str[i] <= 57 || str[i] >= 48))
        return (84);
    if (value == 214748364 && sign == -1 && str[i] == 57)
        return (84);
    if (value == 214748364 && (str[i] == 57 || str[i] == 56))
        return (84);
    return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int count = 0;
    int result = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            count++;
        i++;
    }
    while (str[i] <= 57 && str[i] >= 48) {
        if (check_ok(str, result, i, count) == 84)
            return (0);
        result = result * 10 + str[i] - 48;
        i++;
    }
    if (count % 2 != 0)
        result *= -1;
    return (result);
}