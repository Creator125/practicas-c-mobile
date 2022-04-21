//2. Elabore un algoritmo que sirva para identificar el tipo de triángulo (equilátero, isósceles, escaleno), de acuerdo con las medidas de sus tres lados.

#include <stdio.h>

int main(){
  int l1,l2,l3;
  
  //Pidiendo los lados al usuario
  //Lado 1
  printf("Ingrese el lado 1 de triangulo: ");
  scanf("%d",&l1);
  //Lado 2
  printf("Ingrese el lado 2 de triangulo: ");
  scanf("%d",&l2);
  //Lado l3
  printf("Ingrese el lado 3 de triangulo: ");
  scanf("%d",&l3);
  
  //Verificando el tipo de lado
  if((l1 == l2) && (l2 == l3)){
    //Triangulo Equiratero
    printf("\nEl triangulo es Equiratero\n");
  }else if((l1 == l2) || (l2 == l3) || (l3 == l1)){
    //Triangulo Isósceles
    printf("\nEl triangulo es Isoseles\n");
  }else if((l1 != l2) && (l2 != l3) && l3 != l1){
    //Triangulo Escaleno
    printf("\nEl triangulo es Escaleno\n");
  }
  
  return 0;
}