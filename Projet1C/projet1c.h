#include <stdio.h>
#include <stdlib.h>

typedef struct Plateau{
    int ** tab;
    int taille;
    int forme;
    int politique;
} plateau;

void create_2darray_bis(int ***A, int L, int C);

void create_array_bis(int **A, int taille);

void disp_2darray(plateau Plat);

void fill_2darray(plateau * Plat);
