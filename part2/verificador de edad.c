/*
Algorimo que verifica el rango de edad entre mayor y menor de edad
al ingresar el datos se debe mostrar ek rango.

Al terminar de calcular las edades ingresadas se debe imprimir:

a).El numero de edades mayores.
b).El numero de edades menores.
c).El promedio de las edades.
*/

#include <stdio.h>

int main(){
  int edad,n,i=1;
  int promedio,edad_menor,edad_mayor;
  
  printf("Edades a analizar: ");
  scanf("%i",&n);
  
  while (i <= n){
    printf("Ingrese la edad de las persona #%i: ",i);
    scanf("%i",&edad);
    
    if (edad >= 18){
      printf("Es mayor de edad\n");
      
      edad_mayor++; //Contado los mayores de edad
    }else{
      printf("Es menor de edad\n");
      
      edad_menor++;//Contado los menores de edad
    }
    
    printf("\n"); //Linraen blanco
    
    i++;
  }
  
  promedio = (edad_mayor + edad_menor) / n; //Obteniendo el promedio de edades
  
  printf("\nMayores de edad: %i\n",edad_mayor);
  printf("Menores de edad: %i\n",edad_menor);
  printf("Promedio de edades: %i\n",promedio);
  
  return 0;
}