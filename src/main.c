#include "tetris.h"

int main(){
    srand(time(NULL));

    // Déclaration des variables utilisées
    int choix;
    int indices_blocs[3] = {0}; // Dans le cas où la politique choisie est 2 (3 blocs aléatoires)
    int jouer = 1;
    int indice_choix, ligne, colonne;
    int tentative = 1;
    plateau jeu = {NULL, NULL, 0, 0, 0, 0};

    // Affichage de l'accueil et sélection du choix du joueur
    choix = choix_debut();

    // Affichage des règles puis attente pour lancement du jeu
    if(choix == 2){
        choix = affichage_regles();
    }

    // Lancement du jeu
    if(choix == 1){

        // Choix de la taille et de la forme du plateau
        choix_plateau(&jeu);

        // Création du plateau en fonction de la forme choisie
        if(jeu.forme == 1){
            creer_plat_crc(&jeu);
        } else if(jeu.forme == 2){
            creer_plat_los(&jeu);
        } else if(jeu.forme == 3){
            creer_plat_tri(&jeu);
        }

        // Choix de la politique de jeu (façon de jouer)
        choix_politique(&jeu);

        // Initialisation du plateau accueillant les blocs du jeu en fonction de la forme choisie
        init_blocs(&jeu);

        // Début de la boucle de jeu
        while(jouer){
            if(jeu.politique == 2){
                selectionner_blocs(indices_blocs, jeu);
            }
            afficher_plateau(&jeu);
            afficher_bloc(jeu, indices_blocs);

            tentative = 1;
            do{
                indice_choix = selection_bloc(indices_blocs, &jeu, tentative);
                ligne = selection_coos_ligne(&jeu);
                colonne = selection_coos_colonne(&jeu);
                tentative ++;
            }while(!verif_validite(&jeu, ligne, colonne, indice_choix, indices_blocs) && tentative <= 3);

            if(tentative == 4){
                jouer = 0;
            }

            if(jouer){
                placer_bloc(&jeu, ligne, colonne, indice_choix, indices_blocs);
                if(jeu.forme == 1 || jeu.forme == 2){
                    for(int i = 0; i < jeu.taille; i++){
                        if(etat_ligne(&jeu, i)){
                            annuler_ligne(&jeu, i);
                            jeu = decaler_lignes(jeu, i);
                        }
                    }
                }else if(jeu.forme == 3){
                    for(int i = 0; i < (jeu.taille/2)+1; i++){
                        if(etat_ligne(&jeu, i)){
                            annuler_ligne(&jeu, i);
                            jeu = decaler_lignes(jeu, i);
                        }
                    }
                }
                for(int u = 0; u < jeu.taille; u++){
                    if(etat_colonne(&jeu, u)){
                        annuler_colonne(&jeu, u);
                    }
                }
            }
        }
        message_fin(&jeu);
    }
    if(jeu.forme == 3)
        free_2D_array(jeu.tab, (jeu.taille/2)+1, jeu.taille);
    else
        free_2D_array(jeu.tab, jeu.taille, jeu.taille);

    if(jeu.forme == 3){
        for(int i = 0; i < 20; i++){
            free_2D_array(jeu.liste_blocs[i], 4, 4);
        }
        for(int i = 20; i < 31; i++){
            free_2D_array(jeu.liste_blocs[i], 3, 3);
        }
        free(jeu.liste_blocs);
    }else{
        for(int i = 0; i < 20; i++){
            free_2D_array(jeu.liste_blocs[i], 4, 4);
        }
        for(int i = 20; i < 31; i++){
            free_2D_array(jeu.liste_blocs[i], 5, 5);
        }
        free(jeu.liste_blocs);
    }
    return(0);
}
