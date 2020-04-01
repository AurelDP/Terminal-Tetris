#include "projet1c.h"

void create_2darray(plateau * Plat){
    Plat -> tab = (int**)malloc(Plat->taille*sizeof(int*));
    for(int i = 0; i < Plat->taille; i++)
        create_array(Plat->tab+i, Plat->taille);
}

void create_array(int * tab, int taille){
    *tab = (int*)malloc(taille*sizeof(int));
}

void disp_2darray(plateau Plat){
    for(int i = 0; i < Plat.taille; i ++){
        for(int j = 0; j < Plat.taille; j ++){
            printf("%d ",Plat.tab[i][j]);
        }
        printf("\n");
    }
}

void fill_2darray(plateau * Plat){
    for(int i = 0; i < Plat->taille; i ++){
        for(int j = 0; j < Plat->taille; j ++){
            Plat->tab[i][j] = i+j;
        }
    }
}

