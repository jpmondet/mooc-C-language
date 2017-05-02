/************************************************************************************//**
 *  @file       colis.c
 *
 *  @brief      Brief descriptinon of colis.c 
 *
 *  @date       2017-04-25 11:36
 *
 *  pour les colis légers: le chiffre 1, un espace, 4 lettres, un espace puis un identifiant (un nombre entier). 
 *  Les colis standards: le chiffre 2, un espace, leur poids (un nombre à virgule), un espace, un identifiant (un nombre entier), un espace puis 5 lettres. 
 *  Les colis lourds: le chiffre 3, un espace, un identifiant (un nombre entier), un espace puis leur poids (un nombre a virgule).

On souhaite réaliser un programme qui affiche les colis a trier avec une certaine uniformité pour plus de lisibilité. 

Dans l'entrée du programme nous avons d'abord le nombre de colis total à traiter. 
Vient ensuite pour chaque colis son code sur une ligne. 
Voitre programme doit afficher de manière uniforme l'ensemble des colis à traiter, 
un par ligne, de cette manière: 
d'abord l'identifiant, 
un espace puis 
le poids avec 1 chiffre après la virgule. 

 *
 ***************************************************************************************/

#include <stdio.h>

int main(){

  int nbColis;
  int typeColis;
  int identifiant;
  float poids;
  char ref[10];

  scanf("%d", &nbColis);

  for (int i=0; i<nbColis; i++) {

    scanf("%d", &typeColis);

    if (typeColis == 1){
      //printf("colis Leger"); 
      scanf(" %s ",ref);
      scanf("%d\n",&identifiant);
      poids = 1;

    } else if (typeColis == 2) {
      //printf("colis moyen"); 
      scanf(" %f ",&poids);
      scanf("%d ",&identifiant);
      scanf("%s\n",ref);

    } else {
      //printf("colis lourd"); 
      scanf(" %d ",&identifiant);
      scanf(" %f\n",&poids);

    }
    printf("%d %.1f\n", identifiant, poids);
  }


}


