//Convertir una matriz de 5 elementos numericos a caracter

#include <stdio.h>

void cargarNumero(int vectorentero[5]) //La funcion que cargará los elementos numericos
{
  for (int i = 0; i < 5; i++){
    printf("Ingrese un numero: ");
    scanf("%i",&vectorentero[i]);
  }
}

void cargarCaracter(char vectorcaracter[5]) //La funcion que cargará los elementos caracteres
{
  for (int i = 0; i < 5; i++){
    printf("Ingrese un caracter: ");
    scanf(" %c",&vectorcaracter[i]);
  }
}

void convertirEntero(int vectorentero[5]) //Funcion para convertir los numeros del vector a caracter e imprimirlos
{
  char vectorcaracter[5];
  
  for (int i = 0; i < 5; i++){
    vectorcaracter[i] =(int) vectorentero[i];
    
    printf("%c ",vectorentero[i]);
  }
}

void convertirCaracter(char vectorcaracter[5]) //Funcion para convertir los caracteres del vector a numeros e imprimirlos
{
  int vectorentero[5];
  
  for (int i = 0; i < 5; i++){
    vectorentero[i] =(char) vectorcaracter[i];
    
    printf("%i ",vectorcaracter[i]);
  }
}

void opcion(int opcion){ //Opcion para elegir una opcion
  printf("Elige una opcion: \n");
  printf("[1].Convertir de entero a caracter\n");
  printf("[2].Convertir de caracter a entero\n");
  scanf("%i",&opcion);
}

int main() //Funcion pricipal
{
  int n,numeros[5];
  char caracteres[5];
  
  opcion(n);
  
  if (n == 1){
    cargarNumero(numeros);
    
    printf("Tu Numeros son: \n");
    
    convertirEntero(caracteres);
    
    printf("\n");
  }else if (n == 2){
    cargarCaracter(caracteres);
    
    printf("Tu caracteres son: \n");
    
    convertirCaracter(numeros);
    
    printf("\n");
  }else{
    printf("No elegiste la opcion correcta\n");
  }
  
  return 0;
}