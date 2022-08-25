//Convertir un numero a caracter o viseversa

#include <stdio.h>
#define DESPEDIDA "Gracias"

void cagarEntero(int entero){
  printf("\nIngrese un Numero: ");
  scanf(" %i",&entero);
}


void cagarCaracter(char caracter){
  printf("\nIngrese un Caracter: ");
  scanf(" %c",&caracter);
}


void caracterAentero(char caracter){
  int entero = (int) caracter;
  
  printf("El equivalente numerico es: %i",entero);
}


void enteroAcaracter(int entero){
  char caracter = (char) entero;
  
  printf("El equivalente alfanumerico es: %c",caracter);
}


int main(){
  char caracter,opcion_final;
  int entero, opcion;
  
  printf("\tConvertidor ASCII\n");
  do{
    fflush(stdin);
    printf("Elige una opcion: \n");
    printf("[1].Convertir de caracter a entero\n");
    printf("[2].Convertir de entero a caracter\n");
    printf("[3].Salir\n");
    scanf("%i",&opcion);
    
    switch (opcion){
      case 1: //Convertir a caracter
      cagarEntero(entero);
      enteroAcaracter(entero);
      break;
      case 2: //Convertir a entero
      cagarCaracter(caracter);
      caracterAentero(caracter);
      break;
      case 3: //Salir
      break;
      default: //Niguna opcion concuerda
      printf("\nError");
      break;
    }
    fflush(stdin);
    printf("\n¿Deseas continuar?\n [s/n]:  ");
    scanf(" %c",&opcion_final);
    
  }while(opcion_final == 's');
  printf(DESPEDIDA);
  
  return 0;
}