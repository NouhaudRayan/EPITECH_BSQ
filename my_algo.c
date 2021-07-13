/*
** EPITECH PROJECT, 2020
** my algo
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

int my_algo(int **res, int i, int j)
{
    if (i == 0 || j == 0)
        return (res[i][j]);
    if (i > 0 && j > 0)
        res[i][j] = res[i][j - 1] + 1;
    if (res[i][j] > res[i - 1][j])
        res[i][j] = res[i - 1][j] + 1;
    if (res[i][j] > res[i - 1][j - 1])
        res[i][j] = res[i - 1][j - 1] + 1;
    return (res[i][j]);
}