#include <stdio.h>

void cargarValor(float cantidad) //Funcion para cargar la cantidad de dinero
{
  printf("Ingrese un valor dineral: $");
  scanf("%f",&cantidad);
}

void sumarDinero(float dinero,float cantidad) //Funcio que sumara la cantidades de dimero registrada
{
  cantidad += dinero;
}


int main() //Funcio pricipal
{
  float valor,dinero_total;
  char opcion;
  
  do{
    cargarValor(valor); //Cargando el valor del dinero
    sumarDinero(valor,dinero_total);// Sumando la cantidades ingresada
    
    printf("Deseas agregar un valor a sumar [s/n]: ");
    scanf(" %c",&opcion);
  }while(opcion == 's' || opcion == 'S');
  
  printf("\nCantidad total: %.2f\n",dinero_total);
  
  return 0;
}