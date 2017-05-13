/************************************************************************************//**
 *  @file       compilation-separee.c
 *
 *  @brief      Brief descriptinon of compilation-separee.c 
 *
 *  @date       2017-05-13 07:15
 *
 ***************************************************************************************/

#include <stdio.h>

int main(){

  printf("gcc -c libimage.c -o libimage.so");
  printf("gcc superimage.c -limage -o superimage");

}



