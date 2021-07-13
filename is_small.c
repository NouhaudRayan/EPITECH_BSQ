/*
** EPITECH PROJECT, 2020
** is small
** File description:
** sous fonction
*/

#include "./include/my.h"
#include "function.h"

int is_small(int horizontal, int vertical)
{
    if (horizontal > vertical)
        return (vertical);
    return (horizontal);
}