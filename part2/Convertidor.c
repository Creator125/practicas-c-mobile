//Convertir un numero ingresado a caracter y romano
#include <stdio.h>

void convertirRomano(int a) //La funcion que convierte el numero a romano
{
   //Unidad
    int unidad = a % 10; a /= 10;
    //Decena    
    int decena = a % 10; a /= 10;
    //Centena
    int centena = a % 10; a /= 10;
    //Millar
    int millar = a % 10; a /= 10;
    
      //Imprimiendo el millar
    switch (millar){
        case 1: printf("M");  break;
        case 2: printf("MM"); break;
        case 3: printf("MMM"); break;
    }
      //Imprimiendo la centena
      switch(centena){
          case 1: printf("C"); break;
          case 2: printf("CC"); break;
          case 3: printf("CCC"); break;
          case 4: printf("CD"); break;
          case 5: printf("D"); break;
          case 6: printf("DC"); break;
          case 7: printf("DCC"); break;
          case 8: printf("DCCC"); break;
          case 9: printf("CM"); break;
      }
      //Iprimiendo la dencena
      switch(decena){
          case 1: printf("X"); break;
          case 2: printf("XX"); break;
          case 3: printf("XXX"); break;
          case 4: printf("XL"); break;
          case 5: printf("L"); break;
          case 6: printf("LX"); break;
          case 7: printf("LXX"); break;
          case 8: printf("LXXX"); break;
          case 9: printf("XC"); break;
      }
      //Imprimiendo la unidad
      switch(unidad){
          case 1: printf("I"); break;
          case 2: printf("II"); break;
          case 3: printf("III"); break;
          case 4: printf("IV"); break;
          case 5: printf("V"); break;
          case 6: printf("VI"); break;
          case 7: printf("VII"); break;
          case 8: printf("VIII"); break;
          case 9: printf("IX"); break;
      }
      printf("\n");
}


void convertirCaracter(int a) //La fucion que convier5e el numero a caracter
{
  char b = a;
  
  printf("%c\n",b);
}


int main() //Funcion principal
{
  int n;
  
  printf("Ingrese un numero: "); 
  scanf("%i",&n);
  
  printf("Equivalente a caracter: \n");
  convertirCaracter(n); //Convirtiendo el numero a carater
  printf("Equivalente a romano: \n");
  convertirRomano(n); //Convirtiendo el numero a romano
  
  return 0;
}