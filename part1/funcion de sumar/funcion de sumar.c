#include <stdio.h>

int main(){ //Funcion princpal
  int num1,num2,resultado;
  
  //Pidiendo dos numeros al usuario
  printf("Ingrese dos numeros: ");
  scanf("%i %i",&num1,&num2);
  
  resultado = suma(num1,num2); //Llamando la Funcion
  
  printf("Suma = %d\n",resultado);
  
  return 0;
}

int suma(int a, int b){//Funcion sumar
  int c;
  
  c = a + b;
  return c; //Retormando la suma total
}
