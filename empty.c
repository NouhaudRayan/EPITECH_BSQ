/*
** EPITECH PROJECT, 2020
** empty
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

int empty(char *buff)
{
    int count = 0;

    for (int x = 0; buff[x] != '\0'; x++)
        if (buff[x] == 'o')
            count++;
    if (count == 0)
        return (84);
    return (0);
}