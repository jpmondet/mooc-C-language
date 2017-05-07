#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
 *Ecrivez un programme simple comportant ces six lignes dans le main:

une ligne qui déclare un tableau de 18 long.
une ligne qui affiche la taille en mémoire, en octets, du tableau de la ligne précédente
une ligne qui affiche la valeur minimum autorisée par un long
une ligne qui déclare un tableau de 12 long double
une ligne qui affiche la taille en mémoire, en octets, du tableau de la ligne précédente
une ligne qui affiche la valeur maximum autorisée par un long double au format exposant


*/

int main(){
  long tablong[18];
  printf("%zu\n",sizeof(tablong));
  printf("%ld",LONG_MIN);
  long double tablongdouble[12];
  printf("%zu\n",sizeof(tablongdouble));
  printf("%Le",LDBL_MAX_EXP);

}

