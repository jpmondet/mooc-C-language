/************************************************************************************//**
 *  @file       matrices.c
 *
 *  @brief      Brief descriptinon of matrices.c 
 *
 *  @date       2017-05-08 08:17
 *
 ***************************************************************************************/

#include <stdio.h>

/*
Vous devez récupérer un texte de 200 mots dans l'entrée puis l'afficher à l'envers.
Chaque mot sera affiché à l'endroit mais votre programme affichera d'abord le dernier 
mot puis l'avant dernier mot etc... Chaque mot aura au maximum 40 caractères.

Exemple
Entrée:
Received the likewise law graceful his Nor might set along charm now equal green Pleased yet equally correct colonel not one Say anxious carried compact conduct sex general nay certain Mrs for recommend exquisite household eagerness preserved now My improved honoured he am ecstatic quitting greatest formerly John draw real poor on call my from May she mrs furnished discourse extremely Ask doubt noisy shade guest did built her him Ignorant repeated hastened it do Consider bachelor he yourself expenses no Her itself active giving for expect vulgar months Discovery commanded fat mrs remaining son she principle middleton neglected Be miss he in post sons held No tried is defer do money scale rooms Debating me breeding be answered an he Spoil event was words her off cause any Tears woman which no is world miles woody Wished be do mutual except in effect answer Had boisterous friendship thoroughly cultivated son imprudence connection Windows because concern sex its Law allow saved views hills day ten Examine waiting his evening day passage proceed Inhabiting discretion the her dispatched decisively boisterous joy So form were wish open is able of mile of Waiting express if prevent it we an musical Especially reasonable
Sortie:
reasonable Especially musical an we it prevent if express Waiting of mile of able is open wish were form So joy boisterous decisively dispatched her the discretion Inhabiting proceed passage day evening his waiting Examine ten day hills views saved allow Law its sex concern because Windows connection imprudence son cultivated thoroughly friendship boisterous Had answer effect in except mutual do be Wished woody miles world is no which woman Tears any cause off her words was event Spoil he an answered be breeding me Debating rooms scale money do defer is tried No held sons post in he miss Be neglected middleton principle she son remaining mrs fat commanded Discovery months vulgar expect for giving active itself Her no expenses yourself he bachelor Consider do it hastened repeated Ignorant him her built did guest shade noisy doubt Ask extremely discourse furnished mrs she May from my call on poor real draw John formerly greatest quitting ecstatic am he honoured improved My now preserved eagerness household exquisite recommend for Mrs certain nay general sex conduct compact carried anxious Say one not colonel correct equally yet Pleased green equal now charm along set might Nor his graceful law likewise the Received
 */

void afficherMot(char* mot) {
  int i = 0;
  while (mot[i] != '\0'){
    printf("%c", mot[i]);
    i++;
  }
  printf(" ");
}
int main (){
  char texteInverse[200][40];
  for (int i = 0; i<200 ; i++){
    scanf("%s", texteInverse[199-i]);
  }
  for (int i = 0; i<200 ; i++){
    afficherMot(texteInverse[i]);
  }
  return (0);
}
