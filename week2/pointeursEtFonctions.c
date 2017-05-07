/************************************************************************************//**
 *  @file       pointeursEtFonctions.c
 *
 *  @brief      Brief descriptinon of pointeursEtFonctions.c 
 *
 *  @date       2017-05-07 14:58
 *
 ***************************************************************************************/

#include <stdio.h>

/*
Ecrivez un programme simple comportant une fonction main et une fonction ecarter. La fonction main contient ces lignes:

une ligne qui déclare un double et l'initialise à 0.0.
une ligne qui déclare un pointeur de double et l'initialise avec l'adresse du double précédent
une ligne qui déclare un double et l'initialise à 0.0.
une ligne qui déclare un pointeur de double et l'initialise avec l'adresse du double précédent
une ligne qui fait appel à la fonction ecarter avec les deux pointeurs précédents en argument dans leur ordre de déclaration (le premier déclaré est le premier passé en argument). Attention ici on utilise les variables de type pointeurs directement donc pas d'esperluette nécessaire !
une ligne qui affiche (sans déréférencement, directement avec les noms des variables) les valeurs des deux doubles précédents dans leur ordre de déclaration (le premier déclaré est le premier affiché), séparés par un seul espace, avec 1 chiffre après la virgule et un saut de ligne à la fin
La fonction ecarter sera définie avec aucun retour (void) avec le nom ecarter (très exactement, sans majuscule) et prenant deux paramètres de type pointeur vers des double. Cette fonction a deux lignes:

une ligne qui utilise le déréférencement du premier paramètre pour lui enlever (soustraire) 1.5
une ligne qui utilise le déréférencement du second paramètre pour lui ajouter 1.5
*/

void ecarter(double* dp1, double* dp2){
  *dp1 = *dp1 - 1.5;
  *dp2 = *dp2 + 1.5;
}

int main (){
  double d = 0.0;
  double* dpt = &d;
  double d2 = 0.0;
  double* d2pt = &d2;
  ecarter(dpt,d2pt);
  printf("%.1lf %.1lf\n", d, d2);
  return (0);
}

