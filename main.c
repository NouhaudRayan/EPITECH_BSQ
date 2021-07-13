/* 
** EPITECH PROJECT, 2020
** main
** File description:
** fonction principale
*/

#include "./include/my.h"
#include "function.h"

int main(int ac, char **av)
{
    char *buff;

    if (ac != 2 || error_open(av[1]) == -1) {
        free(buff);
        return (84);
    }
    buff = got_map(av[1]);
    if (other_error(buff) == 84) {
        disp_error(buff);
        free(buff);
        return (84);
    }
    menu(buff, av[1]);
    free(buff);
    return (0);
}