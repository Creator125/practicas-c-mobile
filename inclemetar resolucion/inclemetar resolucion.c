//Inclemetar ka resolucion

#include <stdio.h>

int main(){
  //Asignando las variables
  int ancho,alto,inclemento;
  
  //Entratrada y sslida para las resoluciones
  //Pidiendo el ancho
  printf("Ingrese el ancho: ");
  scanf("%d",&ancho);
  //Pidiendo el alto
  printf("Ingrese el alto: ");
  scanf("%d",&alto);
  //Pidiendo el valor a inclementar
  printf("Incrementar tamaño a: x");
  scanf("%d",&inclemento);
  
  //Realizando el inclemento
  ancho *= inclemento;
  alto *= inclemento;
  
  //Imprimiendo los resutados
  printf("\nAncho: %dpx",ancho);
  printf("\nAlto: %dpx",alto);
  
  
}