/*
** EPITECH PROJECT, 2020
** main
** File description:
** main function
*/

#include "./include/my.h"
#include "function.h"

char **replace_x(struct finally *co, char **result, int **temp, int max)
{
    int maximum = max;
    int max2 = max;

    for (int k = y(co), maximum = max; maximum > 0; maximum--, k--)
        for (int z = x(co), max2 = max; max2 > 0; max2--, z--)
            result[k][z] = 'x';
    return (result);
}


void finally(struct finally *coordonnate, char **result, char *buff, int i)
{
    int **temp = coordonnate->result;
    int v = find_vertical(buff);
    int h = find_horizontal(buff);
    int max = coordonnate->max;

    for (int j = 0; i < v; i++, j++) {
        for (j = 0; j < h; j++) {
            if (temp[i][j] == 0) {
                result[i][j] = 'o';
            } else if ((i == y(coordonnate) && j == x(coordonnate))) {
                result = replace_x(coordonnate, result, temp, max);
            } else
                result[i][j] = '.';
        }
        result[i][j] = '\n';
        j++;
        result[i][j] = '\0';
    }
    disp_finish(result, v, h);
    free_multiple_char(result, find_vertical(buff));
}