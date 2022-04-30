//Contador hasta el numero ingresado

#include <stdio.h>

int main(){
  int num,i;
  
  //Preguntando el numero al usuario
  printf("Ingrese el numero final:");
  scanf("%i",&num);
  
  //Contador
  for(i=1;i<=num;i++){
    printf("%i\n",i);
  }
  return 0;
}