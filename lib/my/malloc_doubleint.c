/*
** EPITECH PROJECT, 2020
** malloc a double int
** File description:
** sous fonction
*/

#include "my.h"

int **malloc_doubleint(int x, int y)
{
    int **result = malloc(sizeof(int *) * (x + 2));

    for (int i = 0; i < x; i++)
        result[i] = malloc(sizeof(int) * (y + 2));
    return (result);
}