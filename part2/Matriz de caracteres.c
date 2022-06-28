//Convertir una matriz de 5 rlementos numericos a caracter

#include <stdio.h>

void cargar(int vectorentero[5]) //La funcion que cargará los elementos numericos
{
  for (int i = 0; i < 5; i++){
    printf("Ingrese un numero: ");
    scanf("%i",&vectorentero[i]);
  }
}

void convertir(int vectorentero[5]) //Funcion para convertir los numeros del vector a caracter e imprimirlos
{
  char vectorcaracter[5];
  
  for (int i = 0; i < 5; i++){
    vectorcaracter[i] =(char) vectorentero[i];
    
    printf("%c ",vectorentero[i]);
  }
}

int main() //Funcion pricipal
{
  int numeros[5];
  
  cargar(numeros); //Imgresando los numeros enel vector
  
  printf("Tu caracteres son: \n");
  convertir(numeros); //convirtiendo los numeros a caracter e imprimirlos
  printf("\n");
  
  return 0;
}