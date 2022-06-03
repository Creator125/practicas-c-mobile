//Convertidor de peso a dolar

#include <stdio.h>

int main(){
  //Definiendo las variables
  float cop,usd;
  
  //Entrada y salida
  printf("Peso (COP): ");
  scanf("%f", &cop);
  
  //Realizando la conversion monetaria
  usd = cop / 0.00264791;
  
  //Imprimiendo el resultado
  printf("\nDolar (USD): %.2f",usd);
}