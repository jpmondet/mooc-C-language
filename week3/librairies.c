/************************************************************************************//**
 *  @file       librairies.c
 *
 *  @brief      Brief descriptinon of librairies.c 
 *
 *  @date       2017-05-13 06:53
 *
 ***************************************************************************************/

#include <stdio.h>
/*
La librairie/bibliothèque JPEG (libjpeg.so ) permet de lire et d'écrire des fichiers d'images au format JPEG. 
On vous demande de compiler un programme qui utilise cette librairie/bibliothèque. Ce programme s'appelle vizplus.

Ecrivez un programme qui affiche la commande de compilation nécessaire avec un printf très simple sachant que 
le code source est vizplus.c et que le fichier exécutable produit doit s'appeler vizplus.
 */

int main(){
  printf("gcc vizplus.c /usr/lib/libjpeg.so -o vizplus");
}


