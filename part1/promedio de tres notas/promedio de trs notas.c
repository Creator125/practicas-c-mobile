//Se desea obtener el promedio simple de un estudiante a partir de sus tres notas parciales.

#include <stdio.h>

int main(){
  int nota1,nota2,nota3;
  float promedio;
  
  printf("Ingrese tus tres notas: ");
  scanf("%i %i %i", &nota1,&nota2,&nota3); //Leyendos las notas optenidos pot el usuario
  
  //Analizando el promedio de las tres notas ingresadas
  promedio = (nota1 + nota2 + nota3) / 3;
  
  //Imprimiendo el resultado
  printf("\nTus nota final es: %.1f\n",promedio);
  
  return 0;
}