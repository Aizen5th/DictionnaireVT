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
Ce fichier contient les fonctions
de la partie 1 du projet "Dictionnaire"
*****************************************************************
**/


#include"primary.h"

/*
Cette fonction permet de créer un dictionnaire.
Elle prend en argument le nom du fichier dictionnaire à créer.
*/
void create_dic(char* name_dic)
{
    printf("\nHello %s\n",name_dic);
}

/*
Cette fonction permet de charger un dictionnaire.
Elle prend en argument le nom du fichier dictionnaire à charger.
*/
void load_dic(char* name_dic)
{
    printf("\nHello %s\n",name_dic);
}

/*
Cette fonction permet de supprimer un dictionnaire.
Elle prend en argument le nom du fichier dictionnaire à supprimer.
*/
void delete_dic(char* name_dic)
{
    FILE* f = fopen(name_dic,"w");
    fprintf(f,"%s",name_dic);
    printf("\nHello %s\n",name_dic);
    fclose(f);
}

/*
Cette fonction permet de creer un dictionnaire a partir d'un fichier texte.
Elle prend en argument le nom du fichier texte à charger.
*/
void magic_dic(char* name_dic)
{
    printf("\nHello %s\n",name_dic);
}
