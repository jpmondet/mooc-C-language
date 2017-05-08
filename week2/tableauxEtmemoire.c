/************************************************************************************//**
 *  @file       tableauxEtmemoire.c
 *
 *  @brief      Brief descriptinon of tableauxEtmemoire.c 
 *
 *  @date       2017-05-08 07:59
 *
 ***************************************************************************************/

#include <stdio.h>
/*
 * Ecrivez un programme simple comportant ces six lignes dans le main:

une ligne qui déclare un premier tableau de 2 doubles initialisés à 1.5
une ligne qui déclare un deuxième tableau de 3 doubles initialisés à 1.5
une ligne qui déclare un troisième tableau de 2 pointeurs de double initialisés avec les adresses des deux tableaux précédents dans l'ordre de déclaration (l'adresse du premier tableau déclaré est dans la preimère case du troisième tableau)
une ligne qui affiche à l'aide du troisième tableau la valeur de la deuxième case du premier tableau en utilisant une notation avec 2 index (deux fois les crochets [..]). La valeur sera affichée avec 2 chiffres après la virgule, sans espace avant ni après et avec un saut de ligne à la fin.
une ligne qui affiche à l'aide du troisième tableau la valeur de la première case du premier tableau en utilisant une notation avec 1 index (une seule fois le crochet [..]). La valeur sera affichée avec 2 chiffres après la virgule, sans espace avant ni après et avec un saut de ligne à la fin.
une ligne qui affiche à l'aide du troisième tableau la valeur de la deuxième case du deuxième tableau en utilisant une notation sans index (pas de crochet [..]). La valeur sera affichée avec 2 chiffres après la virgule, sans espace avant ni après et avec un saut de ligne à la fin.
 */

int main (){

  double d[2] = { 1.5, 1.5};
  double d2[3] = { 1.5, 1.5, 1.5};
  double* dpt[2] = { d, d2 }; 
  printf("%.2lf\n",dpt[0][1]);
  printf("%.2lf\n",*dpt[0]);
  printf("%.2lf\n",*(*(dpt + 1) + 1));

  return (0);
}



