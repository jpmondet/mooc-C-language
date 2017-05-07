/************************************************************************************//**
 *  @file       pointeurs.c
 *
 *  @brief      Brief descriptinon of pointeurs.c 
 *
 *  @date       2017-05-07 14:52
 *
 ***************************************************************************************/

#include <stdio.h>
/*
Ecrivez un programme simple comportant ces trois lignes dans le main:

une ligne qui déclare un entier de type int et l'initialise avec la valeur de votre choix
une ligne qui déclare un pointeur d'entier et l'initialise avec l'adresse de l'entier précédent
un ligne qui affiche l'adresse de l'entier et utilise le déréférencement pour afficher la valeur de l'entier
*/


int main(){
  int entier = 1;
  int* pointentier = &entier;
  printf("%p\n %d\n", pointentier, *pointentier);



}
