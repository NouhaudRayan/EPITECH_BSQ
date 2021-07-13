/*
** EPITECH PROJECT, 2020
** free double int
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

void freedoubleint(int **res, int x, int y)
{
    for (int i = 0; i < x; i++)
        free(res);
    free(res);
}