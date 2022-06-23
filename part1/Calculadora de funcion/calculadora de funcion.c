#include <stdio.h>

int main(){ //Funcion principal
  int n1,n2;
  char operador;
  
  printf("\tCalculadora\n"); //Presentacion

  printf("Ingrese tu operacion:\n");
  /*En esta el usuario debe ingesar el numero,
  luego el operador y otro numero al final*/
  scanf("%f %c %f",&n1,&operador,&n2);
  
  if((operador == '+') || (operador == '-') || (operador == '*') || (operador == '/')){
    calcular(n1,operador,n2);
  }else{
    printf("Error\n");
  }
  
  return 0;
}

void calcular(int a,char o, int b){ //Esta funcion verificará el operador
  if (o == '+'){
    suma(a,b);
  }else if (o == '-'){
    resta(a,b);
  }else if (o == '*'){
    multiplica(a,b);
  }else if (o == '/'){
    dividir(a,b);
  }
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