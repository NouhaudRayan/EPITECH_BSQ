/*
** EPITECH PROJECT, 2020
** fillup
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

struct finally *fillup(int **result, char *buff, int i, int max)
{
    struct finally *coordonnate = malloc(sizeof(struct finally));
    int coordx = 0;
    int coordy = 0;

    for (int x = advance(buff, '\n'); buff[x] != '\0'; i++, x++)
        for (int j = 0; buff[x] != '\n'; j++, x++) {
            if (buff[x] == 'o') {
                result[i][j] = 0;
            } else if (buff[x] == '.') {
                result[i][j] = 1;
                result[i][j] = my_algo(result, i, j);
            }
            if (max < result[i][j]) {
                max = result[i][j];
                coordy = i;
                coordx = j;
            }
        }
    coordonnate = fill_up_struct(result, max, coordx, coordy);
    return (coordonnate);
}