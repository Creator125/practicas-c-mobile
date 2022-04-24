/*Diseñar un algoritmo que permita introducir tres números cualesquiera, 
y a continuación se imprima el menor y el mayor,No se permiten números iguales */

#include <stdio.h>

int main(){
  int num1,num2,num3,mayor;
  
  //Presentacion
  printf("\tMostrar el mayor de 3 numeros\n");
  
  
  //Ingresar tres numeros
  printf("\nIngrese tres numeros: ");
  scanf("%i %i %i",&num1,&num2,&num3);
  
  //Verificando cual es el numero mayor
  if ((num1 > num2) && (num1 > num3)){
    //num1 es mayor (El primer numero)
    mayor = num1;
  }else if((num2 > num1) && (num2 > num3)){
    //num2 es mayor (El segundo numero)
    mayor = num2;
  }else if((num3 > num1) && (num3 > num2)){
    //num3 es mayor (El tercer numero)
    mayor = num3;
  }
  
  //Imprimiendo el mayor de los tres numeros
  printf("\nEl numero mayor es %i\n",mayor);
  
  return 0;
}