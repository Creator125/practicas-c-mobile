#include <stdio.h>

char operador,opcion; //Equivaldrá: +, -, *, /
float resul;

float main(){ //Funcion principal
  float n1,n2;
  
  printf("\tCalculadora\n"); //Presentacion

  inicio:
  printf("Ingrese tu operacion:\n");
  /*En esta el usuario debe ingesar el numero,
  luego el operador y otro numero al final*/
  scanf("%i %c %i",&n1,&operador,&n2);
  
  if((operador == '+') || (operador == '-') || (operador == '*') || (operador == '/')){
    calcular(n1,n2);
    printf("%.f\n",resul);
  }else{
    printf("Error\n");
  }
  
  conti_salida();
  
  return 0;
}

float calcular(float a, float b){ //Esta funcion verificará el operador
  if (operador == '+'){
    resul = suma(a,b);
  }else if (operador == '-'){
    resul = resta(a,b);
  }else if (operador == '*'){
    resul = multiplica(a,b);
  }else if (operador == '/'){
    resul = dividir(a,b);
  }

  return resul;
}


float suma(float as, float bs){//Funcion sumar
  float c;
  
  c = as + bs;
  return c;
}



float resta(float ar, float br){//Funcion restar
  float c;
  
  c = ar - br;
  return c; 
}



float multiplica(float am, float bm){//Funcion multiplicar
  float c;
  
  c = am * bm;
  return c; 
}


float dividir(float ad, float bd){//Funcion dividir
  float c;
  
  c = ab / bd;
  return c;
}


char conti_salida(){//La funcion de continuar osalida
  do{
    fflush(stdin);
    
    opciones:
    printf("¿Deseas continuar?:\n (N)Salir, (S)continuar\n");
    scanf("%c",&opcion);
    
    if((opcion != 'n') || (opcion != 'N')){
      goto inicio;
    }
    
    if((opcion != 's') || (opcion != 'S')){
      goto opciones;
    }
    
  }while((opcion != 'n') || (opcion != 'N'));
}