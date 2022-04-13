//Comprobar si unos de los numeros son menor,mayor o igual.

#include <stdio.h>

int main(){
  int var1,var2;
  
  printf("Ingrese dos numero: ");
  scanf("%d %d", &var1,&var2); //Pidiendo los dos numeros a examinar
  
  if (var1 == var2){
    //Si var1 es igual a var2 entonces se imprimirá el siguente mensaje
    printf("Ambos numeros son iguales \n");
  }else if (var1 > var2){
    //Si var1 es mayor a var2 entonces se imprimirá el siguente mensaje
    printf("%d es mayor que %d",var1,var2);
  }else{
    //De lo contrario se imprimirá el siguente mensaje.
    printf("%d es menor que %d \n",var1,var2);
  }
  
  return 0;
}