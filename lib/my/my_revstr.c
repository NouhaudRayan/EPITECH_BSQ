/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Fonction Lib
*/

#include "my.h"

char *my_revstr(char *str)
{
    int c = my_strlen(str) - 1;
    int i = 0;

    for (int x = 0;i <= c; i++, c--) {
        x = str[i];
        str[i] = str[c];
        str[c] = x;
    }
    return (str);
}