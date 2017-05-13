/************************************************************************************//**
 *  @file       arguments.c
 *
 *  @brief      Brief descriptinon of arguments.c 
 *
 *  @date       2017-05-13 07:50
 *
 ***************************************************************************************/

#include "/usr/include/stdio.h"
#include <stdlib.h>
/*
 * Ecrivez un programme qui récupère en argument en ligne de commande (avec argv) un entier et un nombre à virgule (dans cet ordre)
 * et qui les affiche : d'abord l'entier puis un espace 
 * puis le nomre à virgule avec deux chiffres après la virgule puis un saut de ligne.
 */
int main(int argc, char* argv[]){
  int entier = atoi(argv[1]);
  float nombre = atof(argv[2]);
  printf("%d %.2f\n", entier, nombre);
  return(0);
}

