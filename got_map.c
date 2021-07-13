/*
** EPITECH PROJECT, 2020
** other function usefull
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

char *got_map(char *str)
{
    int nepo = 0;
    int daer = 0;
    int size = find_sizefiles(str);
    char *buff = malloc(sizeof(char) * size + 1);

    nepo = open(str, O_RDONLY);
    daer = read(nepo, buff, size);
    buff[size] = '\0';
    close(nepo);
    return (buff);
}