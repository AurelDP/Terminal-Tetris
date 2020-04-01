#include "projet1c.h"

int** creer_tab2D_dyn(int taille_x, int taille_y){
    int** tab = NULL;
    tab = (int**)malloc(taille_x*sizeof(int*));
    for(int i = 0; i < taille_x; i++){
        tab[i] = (int*)malloc(taille_y*sizeof(int));
    }
    return tab;
}

//UNIVERSEL
/*
int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
*/

int ** creer_bloc_uni_1(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_2(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_3(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_4(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_5(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_6(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_7(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_8(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_9(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_10(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_11(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_12(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_13(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 1; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_14(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_15(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_16(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_17(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_18(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

int ** creer_bloc_uni_19(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1;
    return tab;
}

int ** creer_bloc_uni_20(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0;
    return tab;
}

//CERCLE
/*
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
*/

int ** creer_bloc_crc_1(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_2(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 1; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_3(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_4(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_5(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_6(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 1; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 1; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_7(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_8(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_9(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_crc_10(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 1;
    return tab;
}

int ** creer_bloc_crc_11(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 1;
    tab[4][0] = 1; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 1;
    return tab;
}

int ** creer_bloc_crc_12(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

//LOSANGE
/*
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
*/

int ** creer_bloc_los_1(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 1; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_2(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_3(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_4(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_5(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 1; tab[2][4] = 1;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 1; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_6(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 1; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_7(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_8(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 1; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 1; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_9(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_10(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 1; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_11(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 1; tab[4][3] = 1; tab[4][4] = 1;
    return tab;
}

int ** creer_bloc_los_12(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 1; tab[3][2] = 1; tab[3][3] = 1; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 0; tab[4][2] = 0; tab[4][3] = 1; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_13(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 0; tab[3][1] = 1; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 0; tab[4][1] = 1; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

int ** creer_bloc_los_14(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0; tab[0][3] = 0; tab[0][4] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0; tab[1][3] = 0; tab[1][4] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0; tab[2][3] = 0; tab[2][4] = 0;
    tab[3][0] = 1; tab[3][1] = 0; tab[3][2] = 0; tab[3][3] = 0; tab[3][4] = 0;
    tab[4][0] = 1; tab[4][1] = 1; tab[4][2] = 0; tab[4][3] = 0; tab[4][4] = 0;
    return tab;
}

//TRIANGLE
/*
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0;
    return tab;
*/

int ** creer_bloc_tri_1(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 1;
    return tab;
}

int ** creer_bloc_tri_2(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 1; tab[0][2] = 0;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 1;
    return tab;
}

int ** creer_bloc_tri_3(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 1;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_4(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 1; tab[0][2] = 1;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_5(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 1;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_6(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 0; tab[1][1] = 1; tab[1][2] = 0;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 1;
    return tab;
}

int ** creer_bloc_tri_7(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 1; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_8(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1;
    tab[2][0] = 0; tab[2][1] = 0; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_9(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 1; tab[1][1] = 0; tab[1][2] = 0;
    tab[2][0] = 1; tab[2][1] = 0; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_10(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 1; tab[0][2] = 0;
    tab[1][0] = 1; tab[1][1] = 1; tab[1][2] = 1;
    tab[2][0] = 0; tab[2][1] = 1; tab[2][2] = 0;
    return tab;
}

int ** creer_bloc_tri_11(int l, int c){
    int** tab = creer_tab2D_dyn(l,c);
    tab[0][0] = 0; tab[0][1] = 0; tab[0][2] = 0;
    tab[1][0] = 0; tab[1][1] = 0; tab[1][2] = 0;
    tab[2][0] = 1; tab[2][1] = 1; tab[2][2] = 0;
    return tab;
}
