/*
** EPITECH PROJECT, 2020
** display
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

void display(char *buff, int size, int horizontal, int vertical)
{
    int i = advance(buff, '\n');
    int y = 1;
    int k = 0;
    int smaller = is_small(horizontal, vertical);
    char *temp = malloc(sizeof(char) * size);

    for (int z = 1; buff[i] != '\0'; i++, y++, z++) {
        if (buff[i] == '\n') {
            temp[y] = '\n';
            z = 0;
            k++;
        } else if (z <= smaller && k < smaller)
            temp[y] = 'x';
        else
            temp[y] = '.';
        my_printf("%c", temp[y]);
    }
    temp[y] = '\0';
    free(temp);
}