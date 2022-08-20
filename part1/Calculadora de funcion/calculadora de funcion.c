#include <stdio.h>

int main(){ //Funcion principal
  int n1,n2;
  char operador;
  
  printf("\tCalculadora\n"); //Presentacion

  printf("Ingrese tu operacion:\n");
  /*En esta el usuario debe ingesar el numero,
  luego el operador y otro numero al final*/
  scanf("%i",&n1);
  scanf(" %c",&operador);
  scanf("%i",&n2)
  
  if(operador == '+'){
    suma(n1,n2);
  }else if (operador == '-'){
    resta(n1,n2);
  }else if (operador == '-'){
    multiplica(n1,n2);
  }else if (operador == '-'){
    dividir(n1,n2);
  }else{
    printf("Error\n");
  }
  
  return 0;
}


void suma(int as, int bs){//Funcion sumar
  int c = as + bs;
  
  printf("%i\n",c);
}

void resta(int ar, int br){//Funcion restar
  int c = ar - br;
  
  printf("%i\n",c); 
}


void multiplica(int am, int bm){//Funcion multiplicar
  int c = am * bm;
  
  printf("%i\n",c); 
}

void dividir(int ad, int bd){//Funcion dividir
  int c = ad / bd;
  
  printf("%i\n",c);
}