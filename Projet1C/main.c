#include "projet1c.h"

int main(){

    int** tab_test = creer_plat_tri(8, 15);
    for(int i = 0; i < 8; i++){
        for(int u = 0; i < 15; i++){
            printf("%d",tab_test[i][u]);
        }
        printf("\n");
    }

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

    // Affichage des règles puis attente pour lancement du jeu
    if(choix == 2){
        printf("\n\n");
        printf("Le Tetris est un jeu qui se presente sous forme d'une matrice ou des blocs de differentes formes \n"
               "doivent etre poses de sorte que le plateau soit garde le plus longtemps possible non plein. \n"
               "L'idee est de placer chaque bloc a l'emplacement qui permet d'eliminer un maximum de lignes et/ou \n"
               "de colonnes. Ces dernieres sont supprimees automatiquement lorsqu'elles sont pleines.\n"
               "Ici, vous devrez placer les blocs qui vous seront fournis, dans un plateau d'une forme specifique.\n"
               "Bonne chance !\n");
        do{
            printf("\nAppuyez sur '1' pour lancer le jeu : ");
            scanf("%d",&choix);
        }while(choix != 1);
    }

    // Lancement du jeu
    if(choix == 1){
        printf("\n\n");
        plateau jeu = {NULL, 0, 0, 0};

        // Choix de la taille du plateau
        do{
            printf("Taille de votre plateau (entre 21 et 25 compris, seulement en nombres impairs) : ");
            scanf("%d", &jeu.taille);
        }while(jeu.taille < 21 || jeu.taille > 25 || jeu.taille%2 == 0);

        // Choix de la forme du plateau
        do{
            printf("\nForme de votre plateau \n1 : Cercle | 2 : Losange | 3 : Triangle \nVotre choix : ");
            scanf("%d", &jeu.forme);
        }while(jeu.forme != 1 && jeu.forme != 2 && jeu.forme != 3);

        // Choix de la politique de jeu (façon de jouer)
        do{
            printf("\nPolitique de jeu \n1 : Afficher a chaque tour de jeu l'ensemble des blocs disponibles et selection d'un seul a poser \n2 : Afficher uniquement 3 blocs selectionnes aleatoirement \nVotre choix : ");
            scanf("%d", &jeu.politique);
        }while(jeu.politique != 1 && jeu.politique != 2);

        // RESTE DU JEU

    }
    return(0);
}
