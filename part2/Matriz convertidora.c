//Convertir una matriz de 5 elementos numericos a caracter

#include <stdio.h>

void cargarNumero(int vectorentero[5]) //La funcion que cargará los elementos numericos
{
  printf("Ingrese 5 numeros: \n");
  
  for (int i = 0; i < 5; i++){
    printf("> ");
    scanf("%i",&vectorentero[i]);
  }
}

void cargarCaracter(char vectorcaracter[5]) //La funcion que cargará los elementos caracteres
{
  printf("Ingrese 5 caracteres: \n");
  
  for (int i = 0; i < 5; i++){
    printf("> ");
    scanf(" %c",&vectorcaracter[i]);
  }
}

void convertirEntero(char vectorcaracter[5]) //Funcion para convertir los numeros del vector a caracter e imprimirlos
{
  int vectorentero[5];
  
  for (int i = 0; i < 5; i++){
    vectorentero[i] = (int) vectorcaracter[i];
    
    printf("%i ",vectorentero[i]);
  }
}

void convertirCaracter(int vectorentero[5]) //Funcion para convertir los caracteres del vector a numeros e imprimirlos
{
  int vectorcaracter[5];
  
  for (int i = 0; i < 5; i++){
    vectorcaracter[i] = (char) vectorentero[i];
    
    printf("%c ",vectorcaracter[i]);
  }
}
int main() //Funcion pricipal
{
  int opcion,numeros[5];
  char caracteres[5];
  
  printf("Elige una opcion: \n");
  printf("[1].Convertir de entero a caracter\n");
  printf("[2].Convertir de caracter a entero\n");
  printf("[3].Salir\n");
  scanf("%i",&opcion);
  
  if (opcion == 1){
    cargarNumero(numeros);
    
    printf("Tu caracteres son: \n");
    
    convertirCaracter(numeros);
    
    printf("\n");
  }else if (opcion == 2){
    cargarCaracter(caracteres);
    
    printf("Tu numeros son: \n");
    
    convertirEntero(caracteres);
    
    printf("\n");
  }else if(opcion == 3){
    printf("Gracias\n");
  }else{
    printf("No elegiste la opcion correcta\n");
  }
  
  return 0;
}