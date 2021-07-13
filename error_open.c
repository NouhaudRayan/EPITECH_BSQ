/*
** EPITECH PROJECT, 2020
** error in project
** File description:
** sous fonctino
*/

#include "./include/my.h"
#include "function.h"

int error_open(char *str)
{
    int nepo = 0;

    nepo = open(str, O_RDONLY);
    if (nepo == -1) {
        close(nepo);
        return (-1);
    }
    close(nepo);
    return (1);
}