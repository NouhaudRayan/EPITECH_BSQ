/*
** EPITECH PROJECT, 2020
** menu
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

char *menu(char *buff, char *str)
{
    int i = 0;
    int max = 0;
    int x = find_horizontal(buff);
    int y = find_vertical(buff);
    int size = find_sizefiles(str);
    char **result = malloc_double(buff);
    int **temp = malloc_doubleint(y + 2, x + 2);
    struct finally *coordonnate = malloc(sizeof(struct finally));

    if (empty(buff) == 84) {
        special_case(buff, size);
        return (buff);
    }
    coordonnate = fillup(temp, buff, i, max);
    finally(coordonnate, result, buff, i);
    free(coordonnate);
    return (buff);
}