#include "projet1c.h"
// Information : Code ASCII du carr� : 254
// Code ASCII du point central : 250

int main(){
    srand(time(NULL));

    // D�claration des variables utilis�es
    int choix;
    int indices_blocs[3] = {0}; // Dans le cas o� la politique choisie est 2 (3 blocs al�atoires)
    int jouer = 1;
    int indice_choix, ligne, colonne;

    // Affichage de l'accueil et s�lection du choix du joueur
    printf("#############################\n   Comme un air de Tetris\n#############################\n\n");
    printf("1) Commencer a jouer\n2) Afficher les regles du jeu\nIndiquez votre choix : ");
    scanf("%d",&choix);
    while(choix != 1 && choix != 2){
        printf("\nLe choix ne correspond pas aux propositions ...\nIndiquez votre choix : ");
        scanf("%d",&choix);
    }

    // Affichage des r�gles puis attente pour lancement du jeu
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
        plateau jeu = {NULL, NULL, 0, 0, 0};

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
        if(jeu.forme == 1){
            jeu = creer_plat_crc(jeu.taille, jeu.taille, jeu);
        } else if(jeu.forme == 2){
            jeu = creer_plat_los(jeu.taille, jeu.taille, jeu);
        } else if(jeu.forme == 3){
            jeu = creer_plat_tri(jeu.taille/2+1, jeu.taille, jeu);
        }

        // Choix de la politique de jeu (fa�on de jouer)
        do{
            printf("\nPolitique de jeu \n1 : Afficher a chaque tour de jeu l'ensemble des blocs disponibles et selection d'un seul a poser \n2 : Afficher uniquement 3 blocs selectionnes aleatoirement \nVotre choix : ");
            scanf("%d", &jeu.politique);
        }while(jeu.politique != 1 && jeu.politique != 2);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        init_blocs(&jeu);

        // D�but de la boucle de jeu
        while(jouer){
            if(jeu.politique == 2){
                selectionner_blocs(indices_blocs, jeu);
            }
            afficher_plateau(jeu);
            afficher_bloc(jeu, indices_blocs);

            do{
                indice_choix = selection_bloc(indices_blocs, jeu);
                ligne = selection_coos_ligne(jeu);
                colonne = selection_coos_colonne(jeu);
            }while(!verif_validite(jeu, ligne, colonne, indice_choix, indices_blocs));
        }
    }
    return(0);
}
