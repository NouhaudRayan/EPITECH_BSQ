/*
** EPITECH PROJECT, 2020
** other error
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

int other_error(char *buff)
{
    int count = 0;

    for (int x = 0; buff[x] != '\0'; x++) {
        if (buff[x] == '.')
            count++;
        if (buff[x] != '.' && buff[x] != 'o' && (buff[x] < '0'
            && buff[x] > '9') && buff[x] != '\n')
            return (84);
    }
    if (count == 0)
        return (84);
    return (0);
}