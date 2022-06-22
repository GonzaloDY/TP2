/*Implementar un programa en el cual: se defina una constante numérica llamada "PI" con el valor 3.14, se solicite 
que se ingrese un número que será el radio de una circunferencia, se calcule el valor de la longitud de la circunferencia 
y se lo pesente por pantalla. Recordar que la longitud de la circunferencia = 2 * PI * radio. Para este problema diseñar 
una función que reciba los dos valores y calcule el valor de la solicitado.*/

#include<stdio.h>

float circunferencia(float pi, float r);

int main(int argc, char *argv[])
{
    float PI=3.14, radio, resultado;
    printf("\nIngrese el radio de la circunferencia:\n");
    scanf("%f", &radio);
    resultado=circunferencia(PI, radio);    
    printf("La longitud de la circunferencia es %.2f\v",resultado);
    return 0;
}

float circunferencia(float pi, float r)
{
    float longitud;
    longitud=pi*r;
    return longitud;
}