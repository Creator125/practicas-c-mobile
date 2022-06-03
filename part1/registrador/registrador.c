//Registrador

#include <stdio.h>

int main(){
  int edad;
  char nombre[20];
  
  //En nombre del usuario
  printf("Ingrese tu usuario: ");
  gets(nombre);
  //La edad del usuario
  printf("Ingrese tu edad: ");
  scanf("%i",&edad);
  
  //Imprimiendo los datos
  printf("\tTus datos ingresados son:\n \nUsuario: %s \nEdad: %i\n",nombre,edad);
  
}