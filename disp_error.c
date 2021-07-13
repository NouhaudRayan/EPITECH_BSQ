/*
** EPITECH PROJECT, 2020
** disp error
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

void disp_error(char *buff)
{
    int x = advance(buff, '\n');

    for (x; buff[x] != '\0'; x++) {
        my_printf("%c", buff[x]);
    }
}