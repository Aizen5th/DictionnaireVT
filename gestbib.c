/**
*****************************************************************
*****************************************************************
Projet: Dictionnaire C
*****************************************************************
R�alis� par Steven KPONOU JOHNSON
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
Cette fonction permet de cr�er un dictionnaire.
Elle prend en argument le nom du fichier dictionnaire � cr�er.
*/
void create_dic(char* name_dic)
{
    printf("\nHello %s\n",name_dic);
}

/*
Cette fonction permet de charger un dictionnaire.
Elle prend en argument le nom du fichier dictionnaire � charger.
*/
void load_dic(char* name_dic)
{
    printf("\nHello %s\n",name_dic);
}

/*
Cette fonction permet de supprimer un dictionnaire.
Elle prend en argument le nom du fichier dictionnaire � supprimer.
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
Elle prend en argument le nom du fichier texte � charger.
*/
void magic_dic(char* name_dic)
{
    printf("\nHello %s\n",name_dic);
}
