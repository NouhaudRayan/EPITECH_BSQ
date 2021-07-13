/*
** EPITECH PROJECT, 2020
** display full
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

void display_full(char *buff, int size)
{
    int y = 0;
    char *temp = malloc(sizeof(char) * size);

    for (int i = advance(buff, '\n'); buff[i] != '\0'; i++, y++) {
        if (buff[i] == '\n') {
            temp[y] = buff[i];
        } else
            temp[y] = 'x';
        my_printf("%c", temp[y]);
    }
    temp[y] = '\0';
    free(temp);
}