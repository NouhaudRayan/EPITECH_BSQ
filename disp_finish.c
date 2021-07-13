/*
** EPITECH PROJECT, 2020
** disp finish
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

void disp_finish(char **result, int vertical, int horizontal)
{
    for (int i = 0; i < vertical; i++)
        write(1, result[i], horizontal + 1);
}