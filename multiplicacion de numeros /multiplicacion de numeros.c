#include <stdio.h>

int main(){
  int i,n;
  float multi=0;
  
  printf("Ingrese la cantidad de numeros a multiplicar: ");
  scanf("%i",&n);
  
  while(i <= n){
    multi *= i;
    i++;
  }
  
  printf("\nResultado: %.f",multi);
  
  return 0;
}