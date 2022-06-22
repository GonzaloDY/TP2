/*Utilizando las funciones diseñadas en el ejercicio anterior, codificar un programa en el que se solicita el ingreso de dos números complejos. 
Para esto deberá ingresar parte real y parte imaginaria de la forma binómica en una variable tipo estructura para cada número complejo, 
luego utilizar otra función para calcular la suma de los mismos, además debe retornar el resultado utilizando una variable tipo estructura. 
Presentar por pantalla los números ingresados y el resultado*/

#include<stdio.h>

typedef struct
{
    float real;
    float imaginario;
}complejo;

complejo ingresarComplejo();
complejo suma(complejo primero,complejo segundo);

int main(int argc, char*argv[])
{
    complejo unNumero, otroNumero, resultados;
    printf("\nPrograma para sumar dos numeros complejos\nIngrese un numero complejo:");
    unNumero=ingresarComplejo();
    printf("\nIngrese otro numero complejo:");
    otroNumero=ingresarComplejo();
    resultados=suma(unNumero, otroNumero);
    printf("\nEl número ingresado es %.1f + %.1fi\v",resultados.real,resultados.imaginario);
    return 0;
}

complejo ingresarComplejo()
{
    complejo numero;
    printf("\nParte real:\t");
    scanf("%f",&numero.real);
    printf("Parte imaginaria:\t");
    scanf("%f",&numero.imaginario);
    return numero;
}
complejo suma(complejo primero,complejo segundo)
{
    complejo resultado;
    resultado.real=primero.real+segundo.real;
    resultado.imaginario=primero.imaginario+segundo.imaginario;
    return resultado;
}