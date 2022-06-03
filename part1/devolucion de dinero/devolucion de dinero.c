//Saber la devolucion de aquella cantidad

#include <stdio.h>

int main(){
  int cantidad_dinero,valor_producto,devolucion;
  
  //Pidiemdo los datos para la compra
  printf("Ingrese su valor a pagar: $");
  scanf("%d",&cantidad_dinero); //Pidiendo el valor que ingresa el usuario
  printf("\nIngrese el valor del producto: $");
  scanf("%d",&valor_producto); //Pidiendo el valor del producto
  
  //Codicional
  if (cantidad_dinero == valor_producto){
    //Si ambos valores son iguales imprimirá un mensaje
    printf("\nEl pago es exacto \n");
  }else if(cantidad_dinero < valor_producto){
    //Si el valor del usuario es menor al valor a pagar
    printf("\nDinero insuficiente \n");
  }else{
    //Se ejecutará si ningunas de las condiciones son verdaderas
    //Opreacion para la devolucion
    devolucion = cantidad_dinero - valor_producto;
    
    //Imprimiendo la devolucion
    printf("\nLa devolucion del dinero restantes es: $%d \n",devolucion);
  }
  
  return 0;
  
}