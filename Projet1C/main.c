#include "projet1c.h"

int main(){

    // Déclaration des variables utilisées
    int choix;

    // Affichage de l'accueil et sélection du choix du joueur
    printf("#############################\n   Comme un air de Tetris\n#############################\n\n");
    printf("1) Commencer a joueur\n2) Afficher les regles du jeu\nIndiquez votre choix : ");
    scanf("%d",&choix);
    while(choix != 1 && choix != 2){
        printf("\nLe choix ne correspond pas aux propositions ...\nIndiquez votre choix : ");
        scanf("%d",&choix);
    }

    // Affichage des règles
    if(choix == 2){
        printf("\n\n");
        printf("Insertion des regles ici...\n");
        do{
            printf("\nAppuyez sur '1' pour lancer le jeu : ");
            scanf("%d",&choix);
        }while(choix != 1);
    }

    // Lancement du jeu
    if(choix == 1){
        printf("\n\n");
        plateau jeu = {NULL, 0, 0, 0};

        do{
            printf("Taille de votre plateau (entre 21 et 26 compris) : ");
            scanf("%d", &jeu.taille);
        }while(jeu.taille < 21 || jeu.taille > 26);
        do{
            printf("\nForme de votre plateau \n1 : Cercle | 2 : Losange | 3 : Triangle \nVotre choix : ");
            scanf("%d", &jeu.forme);
        }while(jeu.forme != 1 && jeu.forme != 2 && jeu.forme != 3);
        do{
            printf("\nPolitique de jeu \n1 : Afficher a chaque tour de jeu l'ensemble des blocs disponibles et selection d'un seul a poser \n2 : Afficher uniquement 3 blocs selectionnes aleatoirement \nVotre choix : ");
            scanf("%d", &jeu.politique);
        }while(jeu.politique != 1 && jeu.politique != 2);

        create_2darray(&jeu);
    }
    return(0);
}
