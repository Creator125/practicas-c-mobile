//Área de un cuadrado, utilizando las variables b,h,a

#include <stdio.h>

int main(){
  float b,h,a;
  
  //Ingresar la Base del cuadrado (b)
  printf("Ingrese la base de cuadrado: ");
  scanf("%f",&b);
  //Ingresar la altura del cuadrado (h)
  printf("Ingrese la altura del cuadrado: ");
  scanf("%f",&h);
  
  //Hallando el area del cuadrado
  a = b * h;
   
  printf("\nEl area del cuadrado es %.1f",a);
  
  return 0;
}