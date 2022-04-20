//Calculadora generica
#include <stdio.h>

int main(){
  int num1,num2,opcion;
  float resultado;
  
  printf("Ingrese dos numeros: ");
  scanf("%i %i", &num1,&num2); //Leyendo los dos numeros
  
  lista_opciones: //Etiqueta de regreso
  //Mostrado las distintas opciones que el usuario puede ingresar
  printf("\nSelecciones las opciones: \n(1).Suma \n(2).Resta \n(3).Multiplicación \n(4).Division\n");
  scanf("%i",&opcion); //Leyendo la opcion ingresada por el usuario
  
  //Opciones en accion
  switch(opcion){
    case 1:
    //Realizar suma
    resultado = num1 + num2;
    printf("\nSelecionaste Sumar, tu resultado es: %.f \n",resultado);
    break;
    
    case 2:
    //Realizar resta
    resultado = num1 - num2;
    printf("\nSelecionaste Restar, tu resultado es: %.f \n",resultado);
    break;
    
    case 3:
    //Realizar multplicación
    resultado = num1 * num2;
    printf("\nSelecionaste Multiplicar, tu resultado es: %.1f \n",resultado);
    break;
    
    case 4:
    //Realizar division
    resultado = num1 / num2;
    printf("\nSelecionaste Division, tu resultado es: %.1f \n",resultado);
    break;
    
    default:
    //En caso de niguna de las opciones
    printf("\nOpcion invalida\n");
    goto lista_opciones; //Regreso a la lista de opciones
  }
  
  return 0;
}