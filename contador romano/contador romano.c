//Contador romano

#include <stdio.h>

int main(){
  int n,i,unidad,decena,centena,millar,i_romano;
  
  do{ //Para evitar que el usuario ingrese numeros negativo o 0.
    fflush(stdin);
    printf("Ingrese la cantidad de elementos a contar: ");
    scanf("%i",&n);
  }while(n <= 0);
  
    
    for(i = 1; i <= n; i++){ //Contando los numeros romanos
    i_romano = i;
    
    
      //Unidad
    unidad = i_romano % 10; i_romano /= 10;
    //Decena    
    decena = i_romano % 10; i_romano /= 10;
    //Centena
    centena = i_romano % 10; i_romano /= 10;
    //Millar
    millar = i_romano % 10; i_romano /= 10;
    
    printf("\n"); //Para dar el salto de linea a cada numero romano
    printf("%i: ",i); //Para imprimiendo el equivalente numerico
    
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
    }
    
    printf("\n"); //Salto de linea para evitar coflicto de lectura en consola
    
    return 0;
}
