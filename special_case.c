/*
** EPITECH PROJECT, 2020
** special case
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

void special_case(char *buff, int size)
{
    int x = find_horizontal(buff);
    int y = find_vertical(buff);

    if (x == y)
        display_full(buff, size);
    else
        display(buff, size, x, y);
}