//Convertidor ASCII (de numero a caracter)

#include <stdio.h>

int main(){
  //Definiendo las variables
  char conver; //Variable hará la conversion
  int numero;
  
  //Estrada y salida
  printf("Ingrese un numero: ");
  scanf("%d",&numero);
  
  //Realizando la conversion
  conver = (char) numero;
  
  //Imprimiedo el resultado
  printf("El equivalente ASCII del numero es: %c",conver);
  
  return 0;
}