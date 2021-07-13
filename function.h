/*
** EPITECH PROJECT, 2020
** function
** File description:
** function
*/

#ifndef function
#define function

struct finally
{
    int **result;
    int max;
    int coordx;
    int coordy;
};

int main(int, char **);

char *menu(char *, char *);

int empty(char *);

int min(int *, int, int);

void finally(struct finally *coordonnate, char **result, char *buff, int i);

int my_algo(int **, int, int);

struct finally *fillup(int **result, char *buff, int i, int max);

int error_open(char *);

int other_error(char *);

char *got_map(char *);

int find_horizontal(char *);

int find_vertical(char *);

char **malloc_double(char *);

int is_small(int, int);

void display(char *, int, int, int);

void display_full(char *, int);

void special_case(char *, int);

void freedoubleint(int **, int, int);

struct finally *fill_up_struct(int **, int, int, int);

int x(struct finally *);

int y(struct finally *);

void disp_finish(char **, int, int);

void disp_error(char *buff);


#endif /* !function */