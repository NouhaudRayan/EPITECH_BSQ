/*
** EPITECH PROJECT, 2020
** function for struct
** File description:
** sous fonction
*/

#include "function.h"
#include "./include/my.h"

struct finally *fill_up_struct(int **result, int maximum, int x, int y)
{
    struct finally *coordonnate = malloc(sizeof(struct finally));

    coordonnate->result = result;
    coordonnate->max = maximum;
    coordonnate->coordx = x;
    coordonnate->coordy = y;
    return (coordonnate);
}