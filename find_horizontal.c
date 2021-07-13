/*
** EPITECH PROJECT, 2020
** find horizontal
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

int find_horizontal(char *buff)
{
    int count = 0;
    int x = advance(buff, '\n');

    for (x; buff[x] != '\n'; x++)
            count++;
    return (count);
}