/************************************************************************************//**
 *  @file       memoire-dynamique.c
 *
 *  @brief      Brief descriptinon of memoire-dynamique.c 
 *
 *  @date       2017-05-12 06:42
 *
 ***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
Ecrivez un programme simple avec une fonction main et une fonction 
allouerchaine qui fera de l'allocation mémoire pour des chaines de caractères.
La fonction allouerchaine sera déclarée comme retournant un pointeur vers un type char,
elle aura pour nom allouerchaine (exactement) et prendra un entier de type int représentant le nombre de 
caractères à allouer en mémoire. Cette fonction allouerchaine aura:
une ligne qui alloue un nombre de caractères spécifié en paramètre de la fonction et 
récupère l'adresse de la mémoire allouée dans un pointeur nommé ptr. 
Je vous oblige ici à utiliser sizeof(char) même si sizeof(char) renvoie 1.
une ligne qui retourne le pointeur précédent
La fonction main utilisera cette fonction allouerchaine a l'aide de ces instructions:
une ligne qui fait appel à la fonction allouerchaine avec 4 en argument et qui récupère le retour dans une variable nommée chaine1
une ligne qui qui fait appel à la fonction allouerchaine avec 8 en argument
et qui récupère le retour dans une variable nommée chaine2
une ligne qui lit une chaine de 3 caractères (+\0 ajouté automatiquement = 4 caractères au total) 
depuis l'entrée avec scanf et qui place le résultat de la lecture dans chaine1
une ligne qui lit une chaine de 7 caractères (+\0 ajouté automatiquement = 8 caractères au total) 
depuis l'entrée avec scanf et qui place le résultat de la lecture dans chaine2
une ligne qui affiche les deux chaines chaine1 et chaine2 séparées par un espace avec un saut de ligne à la fin.
 *
 */

char*  allouerchaine (int size){
  char* ptr =  malloc(size * sizeof(char));
  return(ptr);
}

int main(){
  char* chaine1 = allouerchaine(4);
  char* chaine2 = allouerchaine(8);
  scanf("%s",chaine1);
  scanf("%s",chaine2);
  printf("%s %s\n", chaine1, chaine2);
  return(0);
  
}



