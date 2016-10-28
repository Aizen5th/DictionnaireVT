/**
*****************************************************************
*****************************************************************
Projet: Dictionnaire C
*****************************************************************
Réalisé par Steven KPONOU JOHNSON
            Louis MANTOPOULOS
            William MORGADO
*****************************************************************
ESGI - 2016
*****************************************************************
Ce fichier contient la fonction "main"
de la partie 1 du projet "Dictionnaire"
*****************************************************************
**/


#include"primary.h"
#include "gestbib.h"

int main1()
{
    char answer; char path_dic[MAX];

    printf("Dictionnaire online \n-------------------------------------------------------- \n\n\n");

    do{
        printf("\nVoulez vous : \n\nCharger un dictionnaire (l) \nCreer un dictionnaire (c)\nSupprimer un dictionnaire (d)\nFabriquer un dictionnaire via un texte (f)\n");
        scanf("\n%c",&answer);
    }while(answer != 'l' && answer != 'c' && answer != 'd' && answer != 'f');

    switch(answer){
        case 'c':
            printf("\nVeuillez donner un nom a votre dictionnaire\n");
            scanf("\n%s",path_dic); // SECURISER LA SAISIE & TAILLE
            create_dic(path_dic);
        break;

        case 'l':
            printf("\nVeuillez donner le nom du dictionnaire a charger\n");
            scanf("\n%s",path_dic); // SECURISER LA SAISIE & TAILLE
            load_dic(path_dic); // SECURISER LE CHEMIN
        break;

        case 'd':
            printf("\nVeuillez donner le nom du dictionnaire a supprimer\n");
            scanf("\n%s",path_dic); // SECURISER LA SAISIE & TAILLE
            delete_dic(path_dic); // SECURISER LE CHEMIN
        break;

        case 'f':
            printf("\nVeuillez donner le nom du fichier texte a charger\n");
            scanf("\n%s",path_dic); // SECURISER LA SAISIE & TAILLE
            magic_dic(path_dic); // SECURISER LE CHEMIN
        break;

        default:
            exit(0);
        break;
    }

    return (0);
}
