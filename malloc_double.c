/*
** EPITECH PROJECT, 2020
** malloc double
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

char **malloc_double(char *buff)
{
    int x = find_vertical(buff);
    int y = find_horizontal(buff);
    char **result = malloc(sizeof(char *) * (x + 2));

    for (int i = 0; i < x + 2; i++)
        result[i] = malloc(sizeof(char) * y + 2);
    return (result);
}