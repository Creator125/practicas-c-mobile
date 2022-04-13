#include <stdio.h>

int main(){
  //Definiendo las varianbles
 int num1,num2,resultado;
 int suma,resta,modu;
 float mutl,divi;
 
 //Definiendo los valores
 //Nuneradores
 num1 = 23;
 num2 = 2;
 //Operaores
 suma = num1 + num2;
 resta = num1 - num2;
 modu = num1 % num2;
 mutl = num1 * num2;
 divi = num1 / num2;
 
 //Imprimiedo los resultados
 printf("Suma: %d \n",suma);
 printf("Resta: %d \n",resta);
 printf("Modulo: %d \n",modu);
 printf("Multiplicación: %f \n",mutl);
 printf("Divisiom: %f \n",divi);
 
 return 0;
}