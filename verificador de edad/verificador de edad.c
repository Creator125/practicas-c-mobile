//Verificar la edad ingresada por el usuario
//Si es mayor o menor de edad

#include <stdio.h>

int main(){
  int edad;
  
  printf("Ingrese tu edad: ");
  scanf("%i", &edad); //Pidiendo la edad al usuario
  
  if(edad >= 18){
    //Si la edad es mayor de 18
    printf("\nEres mayor de edad\n");
  }else{
    //De lo contrario (Si no es mayor de 18)
    printf("\nEres menor de edad\n");
  }
  
  return 0;
}