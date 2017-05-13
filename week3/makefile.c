/************************************************************************************//**
 *  @file       compilation-separee.c
 *
 *  @brief      Brief descriptinon of compilation-separee.c 
 *
 *  @date       2017-05-13 07:15
 *
 ***************************************************************************************/

#include <stdio.h>
/*
Ecrivez un programme qui affiche le contenu d'un fichier Makefile (avec des printf) contenant ces lignes:

Une ligne qui affiche la cible superimage et ses dépendances (première ligne du Makefile, attention pas d'espace au début') + saut de ligne
Une ligne qui affiche comment produire la cible superimage (deuxième ligne du Makefile) + saut de ligne
Une ligne qui affiche la cible libimage.so et ses dépendances (troisième ligne du Makefile, attention pas d'espace au début') + saut de ligne
Une ligne qui affiche comment produire la cible libimage.so (quatrième ligne du Makefile) + saut de ligne
*/

int main(){

  printf("superimage: superimage.c libimage.so\n");
  printf("\tgcc superimage.c /usr/bin/libimage.so -o superimage");
  printf("libimage.so: libimage.c libimage.h\n");
  printf("\tgcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libimage.c -o libimage.so\n");
  return(0);
}



