#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
    int ** tab;
    int *** liste_blocs;
    int taille;
    int forme;
    int politique;
    int score;
} plateau;

int** creer_tab2D_dyn(int taille_x, int taille_y);

plateau creer_plat_crc(int l, int c, plateau jeu);
plateau creer_plat_los(int l, int c, plateau jeu);
plateau creer_plat_tri(int l, int c, plateau jeu);

int** remplir_case_tab(int i, plateau jeu);

int score_chiffres(int sc);
plateau calcul_score(plateau jeu);
void afficher_plateau(plateau jeu);

void afficher_plateau(plateau jeu);
void init_blocs(plateau * plat);
int verif_validite(plateau jeu, int l, int c, int choix_bloc, int* indices_blocs);
void afficher_bloc(plateau plat, int * indices_blocs);

int selection_bloc(int* indices_blocs, plateau jeu, int tentative);
int selection_coos_ligne(plateau jeu);
int selection_coos_colonne(plateau jeu);

void selectionner_blocs(int * indices_blocs, plateau jeu);

plateau placer_bloc(plateau jeu, int x, int y, int choix_bloc, int* indices_blocs);

int etat_ligne(plateau jeu, int l);
int etat_colonne(plateau jeu, int c);

plateau annuler_ligne(plateau jeu, int l);
plateau annuler_colonne(plateau jeu, int c);
plateau decaler_lignes(plateau jeu, int i);

int choix_debut();
int affichage_regles();
plateau choix_plateau(plateau jeu);
plateau choix_politique(plateau jeu);
void message_fin(plateau jeu);

//UNIVERSEL
int ** creer_bloc_uni_1(int l, int c);
int ** creer_bloc_uni_2(int l, int c);
int ** creer_bloc_uni_3(int l, int c);
int ** creer_bloc_uni_4(int l, int c);
int ** creer_bloc_uni_5(int l, int c);
int ** creer_bloc_uni_6(int l, int c);
int ** creer_bloc_uni_7(int l, int c);
int ** creer_bloc_uni_8(int l, int c);
int ** creer_bloc_uni_9(int l, int c);
int ** creer_bloc_uni_10(int l, int c);
int ** creer_bloc_uni_11(int l, int c);
int ** creer_bloc_uni_12(int l, int c);
int ** creer_bloc_uni_13(int l, int c);
int ** creer_bloc_uni_14(int l, int c);
int ** creer_bloc_uni_15(int l, int c);
int ** creer_bloc_uni_16(int l, int c);
int ** creer_bloc_uni_17(int l, int c);
int ** creer_bloc_uni_18(int l, int c);
int ** creer_bloc_uni_19(int l, int c);
int ** creer_bloc_uni_20(int l, int c);

//CERCLE
int ** creer_bloc_crc_1(int l, int c);
int ** creer_bloc_crc_2(int l, int c);
int ** creer_bloc_crc_3(int l, int c);
int ** creer_bloc_crc_4(int l, int c);
int ** creer_bloc_crc_5(int l, int c);
int ** creer_bloc_crc_6(int l, int c);
int ** creer_bloc_crc_7(int l, int c);
int ** creer_bloc_crc_8(int l, int c);
int ** creer_bloc_crc_9(int l, int c);
int ** creer_bloc_crc_10(int l, int c);
int ** creer_bloc_crc_11(int l, int c);
int ** creer_bloc_crc_12(int l, int c);

//LOSANGE
int ** creer_bloc_los_1(int l, int c);
int ** creer_bloc_los_2(int l, int c);
int ** creer_bloc_los_3(int l, int c);
int ** creer_bloc_los_4(int l, int c);
int ** creer_bloc_los_5(int l, int c);
int ** creer_bloc_los_6(int l, int c);
int ** creer_bloc_los_7(int l, int c);
int ** creer_bloc_los_8(int l, int c);
int ** creer_bloc_los_9(int l, int c);
int ** creer_bloc_los_10(int l, int c);
int ** creer_bloc_los_11(int l, int c);
int ** creer_bloc_los_12(int l, int c);
int ** creer_bloc_los_13(int l, int c);
int ** creer_bloc_los_14(int l, int c);

//TRIANGLE
int ** creer_bloc_tri_1(int l, int c);
int ** creer_bloc_tri_2(int l, int c);
int ** creer_bloc_tri_3(int l, int c);
int ** creer_bloc_tri_4(int l, int c);
int ** creer_bloc_tri_5(int l, int c);
int ** creer_bloc_tri_6(int l, int c);
int ** creer_bloc_tri_7(int l, int c);
int ** creer_bloc_tri_8(int l, int c);
int ** creer_bloc_tri_9(int l, int c);
int ** creer_bloc_tri_10(int l, int c);
int ** creer_bloc_tri_11(int l, int c);
