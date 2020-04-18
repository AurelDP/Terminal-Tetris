#include "projet1c.h"

int** creer_tab2D_dyn(int taille_x, int taille_y){
    int** tab = NULL;
    tab = (int**)malloc(taille_x*sizeof(int*));
    for(int i = 0; i < taille_x; i++){
        tab[i] = (int*)malloc(taille_y*sizeof(int));
    }
    for(int i = 0; i < taille_x; i++){          // Ici on fait le choix de remplir automatiquement toutes les cases à 0
        for(int j = 0; j < taille_y; j++){      // cela permet de faciliter la tache pour la création du plateau et des blocs
            tab[i][j] = 0;                      // (même si nous ne l'avons pas utilisé pour les blocs, nous aurions pu)
        }
    }
    return tab;
}

// Algorithme de tracé d'arc de cercle de Bresenham
plateau creer_plat_crc(int l, int c, plateau jeu){
    jeu.tab = creer_tab2D_dyn(l,c);
    int xCenter = l/2;
    int yCenter = l/2;
    int y = l/2;
    int x = 0;
    int m = 3 - (2 * l/2);
    int valid;
    int compteur;
    jeu.tab[x + xCenter][y - yCenter] = 1;
    for(x = 0; x <= y; x++){
        if(m < 0){
            m = m + (4 * x) + 6;
        } else {
            y -= 1;
            m += 4*(x-y) + 10;
        }
        jeu.tab[x + xCenter][y + yCenter]   = 1;
        jeu.tab[y + xCenter][x + yCenter]   = 1;
        jeu.tab[-x + xCenter][y + yCenter]  = 1;
        jeu.tab[-y + xCenter][x + yCenter]  = 1;
        jeu.tab[x + xCenter][-y + yCenter]  = 1;
        jeu.tab[y + xCenter][-x + yCenter]  = 1;
        jeu.tab[-x + xCenter][-y + yCenter] = 1;
        jeu.tab[-y + xCenter][-x + yCenter] = 1;
    }
    for(int i = 0; i < l; i++){
        valid = 0;
        if(i > 0 && i < l-1){
            valid = 1;
            compteur = 0;
            for(int u = 0; u < l-1; u++){
                if(((jeu.tab[i][u] == 0 && jeu.tab[i][u+1] == 0) || (jeu.tab[i][u] == 0 && jeu.tab[i][u+1] == 1) || (jeu.tab[i][u] == 1 && jeu.tab[i][u+1] == 1)) && valid == 1 && compteur == 0){
                    valid = 1;
                } else if(jeu.tab[i][u] == 1 && jeu.tab[i][u+1] == 0 && valid == 1){
                    jeu.tab[i][u+1] = 1;
                    valid = 1;
                    compteur ++;
                } else {
                    valid = 0;
                }
            }
        }
    }
    return jeu;
}

plateau creer_plat_los(int l, int c, plateau jeu){
    jeu.tab = creer_tab2D_dyn(l,c);
    int ligne,compteur;
    int decalage_ligne = 1;
    int colonne = l/2;
    for(ligne = 0; ligne < l/2+1; ligne++){
        for(compteur = 0; compteur < decalage_ligne; compteur++){
            jeu.tab[ligne][colonne] = 1;
            colonne++;
        }
        decalage_ligne += 2;
        colonne = (l/2)-(ligne+1);
    }
    colonne = 0;
    decalage_ligne -= 2;
    for(ligne = l/2; ligne < l; ligne++){
        for(compteur = 0; compteur < decalage_ligne; compteur++){
            jeu.tab[ligne][colonne] = 1;
            colonne++;
        }
        decalage_ligne -= 2;
        colonne = colonne - compteur+1;
    }
    return jeu;
}

plateau creer_plat_tri(int l, int c, plateau jeu){
    jeu.tab = creer_tab2D_dyn(l,c);
    int ligne,compteur;
    int decalage_ligne = 1;
    int colonne = l-1;
    for(ligne = 0; ligne < l; ligne++){
        for(compteur = 0; compteur < decalage_ligne; compteur++){
            jeu.tab[ligne][colonne] = 1;
            colonne++;
        }
        decalage_ligne += 2;
        colonne = (l-1)-(ligne+1);
    }
    return jeu;
}

int** remplir_case_tab(int i, plateau jeu){
    if(jeu.forme == 1){             // Si le plateau de jeu est un cercle
        switch(i){
            case 0:
                return creer_bloc_uni_1(4,4);
                break;
            case 1:
                return creer_bloc_uni_2(4,4);
                break;
            case 2:
                return creer_bloc_uni_3(4,4);
                break;
            case 3:
                return creer_bloc_uni_4(4,4);
                break;
            case 4:
                return creer_bloc_uni_5(4,4);
                break;
            case 5:
                return creer_bloc_uni_6(4,4);
                break;
            case 6:
                return creer_bloc_uni_7(4,4);
                break;
            case 7:
                return creer_bloc_uni_8(4,4);
                break;
            case 8:
                return creer_bloc_uni_9(4,4);
                break;
            case 9:
                return creer_bloc_uni_10(4,4);
                break;
            case 10:
                return creer_bloc_uni_11(4,4);
                break;
            case 11:
                return creer_bloc_uni_12(4,4);
                break;
            case 12:
                return creer_bloc_uni_13(4,4);
                break;
            case 13:
                return creer_bloc_uni_14(4,4);
                break;
            case 14:
                return creer_bloc_uni_15(4,4);
                break;
            case 15:
                return creer_bloc_uni_16(4,4);
                break;
            case 16:
                return creer_bloc_uni_17(4,4);
                break;
            case 17:
                return creer_bloc_uni_18(4,4);
                break;
            case 18:
                return creer_bloc_uni_19(4,4);
                break;
            case 19:
                return creer_bloc_uni_20(4,4);
                break;
            case 20:
                return creer_bloc_crc_1(5,5);
                break;
            case 21:
                return creer_bloc_crc_2(5,5);
                break;
            case 22:
                return creer_bloc_crc_3(5,5);
                break;
            case 23:
                return creer_bloc_crc_4(5,5);
                break;
            case 24:
                return creer_bloc_crc_5(5,5);
                break;
            case 25:
                return creer_bloc_crc_6(5,5);
                break;
            case 26:
                return creer_bloc_crc_7(5,5);
                break;
            case 27:
                return creer_bloc_crc_8(5,5);
                break;
            case 28:
                return creer_bloc_crc_9(5,5);
                break;
            case 29:
                return creer_bloc_crc_10(5,5);
                break;
            case 30:
                return creer_bloc_crc_11(5,5);
                break;
            case 31:
                return creer_bloc_crc_12(5,5);
                break;
        }
    } else if(jeu.forme == 2){      // Si le plateau de jeu est un losange
        switch(i){
            case 0:
                return creer_bloc_uni_1(4,4);
                break;
            case 1:
                return creer_bloc_uni_2(4,4);
                break;
            case 2:
                return creer_bloc_uni_3(4,4);
                break;
            case 3:
                return creer_bloc_uni_4(4,4);
                break;
            case 4:
                return creer_bloc_uni_5(4,4);
                break;
            case 5:
                return creer_bloc_uni_6(4,4);
                break;
            case 6:
                return creer_bloc_uni_7(4,4);
                break;
            case 7:
                return creer_bloc_uni_8(4,4);
                break;
            case 8:
                return creer_bloc_uni_9(4,4);
                break;
            case 9:
                return creer_bloc_uni_10(4,4);
                break;
            case 10:
                return creer_bloc_uni_11(4,4);
                break;
            case 11:
                return creer_bloc_uni_12(4,4);
                break;
            case 12:
                return creer_bloc_uni_13(4,4);
                break;
            case 13:
                return creer_bloc_uni_14(4,4);
                break;
            case 14:
                return creer_bloc_uni_15(4,4);
                break;
            case 15:
                return creer_bloc_uni_16(4,4);
                break;
            case 16:
                return creer_bloc_uni_17(4,4);
                break;
            case 17:
                return creer_bloc_uni_18(4,4);
                break;
            case 18:
                return creer_bloc_uni_19(4,4);
                break;
            case 19:
                return creer_bloc_uni_20(4,4);
                break;
            case 20:
                return creer_bloc_los_1(5,5);
                break;
            case 21:
                return creer_bloc_los_2(5,5);
                break;
            case 22:
                return creer_bloc_los_3(5,5);
                break;
            case 23:
                return creer_bloc_los_4(5,5);
                break;
            case 24:
                return creer_bloc_los_5(5,5);
                break;
            case 25:
                return creer_bloc_los_6(5,5);
                break;
            case 26:
                return creer_bloc_los_7(5,5);
                break;
            case 27:
                return creer_bloc_los_8(5,5);
                break;
            case 28:
                return creer_bloc_los_9(5,5);
                break;
            case 29:
                return creer_bloc_los_10(5,5);
                break;
            case 30:
                return creer_bloc_los_11(5,5);
                break;
            case 31:
                return creer_bloc_los_12(5,5);
                break;
            case 32:
                return creer_bloc_los_13(5,5);
                break;
            case 33:
                return creer_bloc_los_14(5,5);
                break;
        }
    } else if(jeu.forme == 3){      // Si le plateau de jeu est un triangle
        switch(i){
            case 0:
                return creer_bloc_uni_1(4,4);
                break;
            case 1:
                return creer_bloc_uni_2(4,4);
                break;
            case 2:
                return creer_bloc_uni_3(4,4);
                break;
            case 3:
                return creer_bloc_uni_4(4,4);
                break;
            case 4:
                return creer_bloc_uni_5(4,4);
                break;
            case 5:
                return creer_bloc_uni_6(4,4);
                break;
            case 6:
                return creer_bloc_uni_7(4,4);
                break;
            case 7:
                return creer_bloc_uni_8(4,4);
                break;
            case 8:
                return creer_bloc_uni_9(4,4);
                break;
            case 9:
                return creer_bloc_uni_10(4,4);
                break;
            case 10:
                return creer_bloc_uni_11(4,4);
                break;
            case 11:
                return creer_bloc_uni_12(4,4);
                break;
            case 12:
                return creer_bloc_uni_13(4,4);
                break;
            case 13:
                return creer_bloc_uni_14(4,4);
                break;
            case 14:
                return creer_bloc_uni_15(4,4);
                break;
            case 15:
                return creer_bloc_uni_16(4,4);
                break;
            case 16:
                return creer_bloc_uni_17(4,4);
                break;
            case 17:
                return creer_bloc_uni_18(4,4);
                break;
            case 18:
                return creer_bloc_uni_19(4,4);
                break;
            case 19:
                return creer_bloc_uni_20(4,4);
                break;
            case 20:
                return creer_bloc_tri_1(3,3);
                break;
            case 21:
                return creer_bloc_tri_2(3,3);
                break;
            case 22:
                return creer_bloc_tri_3(3,3);
                break;
            case 23:
                return creer_bloc_tri_4(3,3);
                break;
            case 24:
                return creer_bloc_tri_5(3,3);
                break;
            case 25:
                return creer_bloc_tri_6(3,3);
                break;
            case 26:
                return creer_bloc_tri_7(3,3);
                break;
            case 27:
                return creer_bloc_tri_8(3,3);
                break;
            case 28:
                return creer_bloc_tri_9(3,3);
                break;
            case 29:
                return creer_bloc_tri_10(3,3);
                break;
            case 30:
                return creer_bloc_tri_11(3,3);
                break;
        }
    }
}

int score_chiffres(int sc){
    int nb = 1;
    while(sc >= 10){
        sc /= 10;
        nb++;
    }
    return nb;
}

plateau calcul_score(plateau jeu){
    jeu.score++;
    return jeu;
}

void afficher_plateau(plateau jeu){
    printf("\n\n     ");
    int w;
    for(w = 97; w < 97+jeu.taille; w++){            // Affichage des lettres en haut du plateau avec le code ASCII
        printf("%c ",w);
    }
    printf("\n");
    printf("   %c%c",201,205);
    for(w = 0; w < jeu.taille; w++){                // Affichage des lignes sous les lettres
        printf("%c%c",205,205);
    }
    printf("%c\n",187);
    if(jeu.forme == 1 || jeu.forme == 2){           // Différenciation Cercle et Losange avec Triangle car hauteur différente
        for(int i = 0; i < jeu.taille; i++){
            printf(" %c %c ",i+65,186);             // Affichage de la lettre et du séparateur de chaque ligne
            for(int u = 0; u < jeu.taille; u++){    // Affichage du plateau (jeu.tab)
                if(jeu.tab[i][u] == 0){
                    printf("  ");
                } else if(jeu.tab[i][u] == 1){
                    printf("%c ",250);
                } else if(jeu.tab[i][u] == 2){
                    printf("%c ",254);
                }
            }
            printf("%c",186);
            if(i == 3){                             // Affichage du score en fonction de la ligne
                printf("   %c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196);
                for(int u = 0; u < score_chiffres(jeu.score); u++){
                    printf("%c",196);               // Calcul et affichage du bon nombre de tirets pour centrer le texte, peut importe le score (fonction score_chiffres calcul le nombre de chiffres dans le score)
                }
                printf("%c%c%c",196,196,196);
            } else if(i == 4){                      // Affichage du score à l'aide de jeu.score, variable elle-même modifiée par calcul_score
                printf("      Score : %d   ",jeu.score);
            } else if(i == 5){
                printf("   %c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196);
                for(int u = 0; u < score_chiffres(jeu.score); u++){
                    printf("%c",196);
                }
                printf("%c%c%c",196,196,196);
            }
            printf("\n");
        }
    } else if(jeu.forme == 3){                      // Si la forme est un triangle, même principe mais avec une hauteur divisée par 2
        for(int i = 0; i < jeu.taille/2+1; i++){
            printf(" %c %c ",i+65,186);
            for(int u = 0; u < jeu.taille; u++){
                if(jeu.tab[i][u] == 0){
                    printf("  ");
                } else if(jeu.tab[i][u] == 1){
                    printf("%c ",250);
                } else if(jeu.tab[i][u] == 2){
                    printf("%c ",254);
                }
            }
            printf("%c",186);
            if(i == 3){
                printf("   %c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196);
                for(int u = 0; u < score_chiffres(jeu.score); u++){
                    printf("%c",196);
                }
                printf("%c%c%c",196,196,196);
            } else if(i == 4){
                printf("      Score : %d   ",jeu.score);
            } else if(i == 5){
                printf("   %c%c%c%c%c%c%c%c%c%c%c",196,196,196,196,196,196,196,196,196,196,196);
                for(int u = 0; u < score_chiffres(jeu.score); u++){
                    printf("%c",196);
                }
                printf("%c%c%c",196,196,196);
            }
            printf("\n");
        }
    }
    printf("   %c%c",200,205);                      // Affichage des séparateurs finaux
    for(w = 0; w < jeu.taille; w++){
        printf("%c%c",205,205);
    }
    printf("%c\n\n",188);
}

void init_blocs(plateau * plat){
    int nb_blocs;
    switch(plat -> forme){
    case 1: //cercle
        nb_blocs = 32;
        break;
    case 2: //losange
        nb_blocs = 34;
        break;
    case 3: //triangle
        nb_blocs = 31;
        break;
    }

    plat -> liste_blocs = (int ***) malloc(nb_blocs * sizeof(int**));
    for(int i = 0; i < nb_blocs; i++){
        plat -> liste_blocs[i] = remplir_case_tab(i, *plat);
    }
}

// ATTENTION : La fonction n'a pas été testée en l'absence des fonctions de placement de bloc. Pour le moment, elle n'est que théorique (et théoriquement testée, elle devrait marcher)
int verif_validite(plateau jeu, int l, int c, int choix_bloc){
    int retour = 2;
    int i;
    int u = 0;
    int taille_bloc = 0;
    switch(jeu.forme){
        case 1: // Cercle
            if((l < 0 || l >= jeu.taille) || (c < 0 || c >= jeu.taille)){   // Si les coordonnées entrées ne sont pas dans le plateau de jeu
                retour = 0;
            }
            taille_bloc = 5;
            break;
        case 2: // Losange
            if((l < 0 || l >= jeu.taille) || (c < 0 || c >= jeu.taille)){
                retour = 0;
            }
            taille_bloc = 5;
            break;
        case 3: // Triangle
            if((l < 0 || l >= jeu.taille/2+1) || (c < 0 || c >= jeu.taille)){ // Utilisation de jeu.taille/2+1 car le triangle est deux fois moins haut
                retour = 0;
            }
            taille_bloc = 4;
            break;
    }
    i = taille_bloc-1;
    while(i > 0 && retour == 2){
        while(u < taille_bloc && retour == 2){
            if((l-(taille_bloc-1-i) < 0 || c+u > jeu.taille-1) && jeu.liste_blocs[choix_bloc][i][u] == 1){  // On détermine la position de chaque bloc plein du bloc et on regarde si ça sort du plateau
                retour = 0;                                                                                 // ici, l-(taille_bloc-1-i) car c'est un décompte inversé, sachant que le l donné est en bas du bloc, i commence à 4 = taille_bloc-1 (dans le cas du cercle)
            } else if(jeu.liste_blocs[choix_bloc][i][u] == 1 && jeu.tab[l+i][c+u] != 1){                    // On vérifie la valeur présent sur le plateau
                retour = 0;
            }
            u++;
        }
        i--;
    }
    if(retour != 0){
        retour = 1;
    }
    return retour;
}

// Fonctions d'affichage du choix des blocs
void afficher_bloc(plateau plat, int * indices_blocs){
    int nb_blocs, taille_bloc, taille_bloc_b;;
    switch(plat.forme){
    case 1: //cercle
        nb_blocs = 32;
        taille_bloc = 5;
        break;
    case 2: //losange
        nb_blocs = 34;
        taille_bloc = 5;
        break;
    case 3: //triangle
        nb_blocs = 31;
        taille_bloc = 3;
        break;
    }

    switch(plat.politique){
    case 1:
        for(int i = 0; i < 4; i ++){
            for(int j = 0; j < 10; j ++){
                for(int k = 0; k < 4; k ++){
                    switch(plat.liste_blocs[j][i][k]){
                        case 0:
                            printf("%c ", 250);
                            break;
                        case 1:
                            printf("%c ", 254);
                            break;
                    }
                }
                printf("  ");
            }
            printf("\n");
        }
        for(int i = 0; i < 10; i ++){
                printf("  %d       ", i);
        }

        printf("\n");

        for(int i = 0; i < 4; i ++){
            for(int j = 10; j < 20; j ++){
                for(int k = 0; k < 4; k ++){
                    switch(plat.liste_blocs[j][i][k]){
                        case 0:
                            printf("%c ", 250);
                            break;
                        case 1:
                            printf("%c ", 254);
                            break;
                    }
                }
                printf("  ");
            }
            printf("\n");
        }
        for(int i = 10; i < 20; i ++){
                printf("  %d      ", i);
        }

        printf("\n");


        for(int i = 0; i < taille_bloc; i ++){
            for(int j = 20; j < 29; j ++){
                for(int k = 0; k < taille_bloc; k ++){
                    switch(plat.liste_blocs[j][i][k]){
                        case 0:
                            printf("%c ", 250);
                            break;
                        case 1:
                            printf("%c ", 254);
                            break;
                    }
                }
                printf("  ");
            }
            printf("\n");
        }
        if(plat.forme == 3){
            printf("  ");
        }
        else{
            printf("    ");
        }
        for(int i = 20; i < 29; i++){
            printf("%d", i);
            for(int j = 0; j < 2*taille_bloc; j++){
                printf(" ");
            }
        }
        printf("\n");
        for(int i = 0; i < taille_bloc; i ++){
            for(int j = 29; j < nb_blocs; j ++){
                for(int k = 0; k < taille_bloc; k ++){
                    switch(plat.liste_blocs[j][i][k]){
                        case 0:
                            printf("%c ", 250);
                            break;
                        case 1:
                            printf("%c ", 254);
                            break;
                    }
                }
                printf("  ");
            }
            printf("\n");
        }
        if(plat.forme == 3){
            printf("  ");
        }
        else{
            printf("    ");
        }
        for(int i = 29; i < nb_blocs; i++){
            printf("%d", i);
            for(int j = 0; j < 2*taille_bloc; j++){
                printf(" ");
            }
        }
        break;
    case 2:
        if(plat.forme == 3){
            taille_bloc = 3;
        }else{
            taille_bloc = 5;
        }

        for(int i = 0; i < 3; i ++){
            if(indices_blocs[i] < 20)
                taille_bloc_b = 4;
            else
                taille_bloc_b = taille_bloc;

            for(int j = 0; j < taille_bloc_b; j ++){
                for(int k = 0; k < taille_bloc_b; k ++){
                    switch(plat.liste_blocs[indices_blocs[i]][j][k]){
                        case 0:
                            printf("%c ", 250);
                            break;
                        case 1:
                            printf("%c ", 254);
                            break;
                    }
                }
                printf("\n");
            }
            printf("  %d\n\n", i);
        }
        break;
    }
}

void selectionner_blocs(int * indices_blocs, plateau jeu){      // Rempli un tableau de 3 valeurs avec 3 indices aléatoires dans le tableau global des blocs
    int nb_blocs, flag_verif = 0;                               // Cela permet alors d'afficher aléatoirement 3 blocs, représentés par des indices qui renvoient vers le tableau général
    switch(jeu.forme){
    case 1:
        nb_blocs = 32;
        break;
    case 2:
        nb_blocs = 34;
        break;
    case 3:
        nb_blocs = 31;
        break;
    }
    indices_blocs[0] = rand() % nb_blocs;
    while(!flag_verif){
        indices_blocs[1] = rand() % nb_blocs;
        if(indices_blocs[0] != indices_blocs[1])
            flag_verif = 1;
    }
    flag_verif = 0;
    while(!flag_verif){
        indices_blocs[2] = rand() % nb_blocs;
        if(indices_blocs[0] != indices_blocs[2] && indices_blocs[1] != indices_blocs[2])
            flag_verif = 1;
    }
}

int etat_ligne(plateau jeu, int l){
    int compteur = 0;
    int u = 0;
    int retour = 2;
    while(compteur == 0 && u < jeu.taille){     // On réduit le nombre de calculs avec le while au lieu d'un for
        if(jeu.tab[l][u] == 1){                 // Dès qu'on trouve un trou dans la ligne, le compteur s'incrémente, ce qui fait sortir de la boucle
            compteur ++;
        }
        u++;
    }
    if(compteur == 0){
        retour = 1;
    } else {                                    // Si le compteur n'est plus à 0, c'est-à-dire qu'il y a eu un trou dans la ligne, on retourne 0
        retour = 0;
    }
    return retour;
}

int etat_colonne(plateau jeu, int c){           // Même principe que pour etat_ligne, sauf que l'on met le triangle à part car sa hauteur est différente
    int compteur = 0;
    int u = 0;
    int retour = 2;
    if(jeu.forme == 1 || jeu.forme == 2){
        while(compteur == 0 && u < jeu.taille){
            if(jeu.tab[u][c] == 1){
                compteur ++;
            }
            u++;
        }
        if(compteur == 0){
            retour = 1;
        } else {
            retour = 0;
        }
    } else if(jeu.forme == 3){
        while(compteur == 0 && u < jeu.taille/2+1){
            if(jeu.tab[u][c] == 1){
                compteur ++;
            }
            u++;
        }
        if(compteur == 0){
            retour = 1;
        } else {
            retour = 0;
        }
    }
    return retour;
}

plateau annuler_ligne(plateau jeu, int l){      // Pour toute la ligne, on remplace tous les 2 du tableau par des 1
    for(int u = 0; u < jeu.taille; u++){
        if(jeu.tab[l][u] == 2){
            jeu.tab[l][u] = 1;
            jeu = calcul_score(jeu);
        }
    }
    return jeu;
}

plateau annuler_colonne(plateau jeu, int c){    // Même principe que pour annuler_ligne, en mettant encore de coté le triangle
    if(jeu.forme == 1 || jeu.forme == 2){
        for(int u = 0; u < jeu.taille; u++){
            if(jeu.tab[u][c] == 2){
                jeu.tab[u][c] = 1;
                jeu = calcul_score(jeu);
            }
        }
    } else if(jeu.forme == 3){
        for(int u = 0; u < jeu.taille/2+1; u++){
            if(jeu.tab[u][c] == 2){
                jeu.tab[u][c] = 1;
                jeu = calcul_score(jeu);
            }
        }
    }
    return jeu;
}

// -------------------------------------------------------------------------

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
